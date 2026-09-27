// src/misc/cDryCellGauge2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEC1E0..00D426F0, 10 functions

#include "mgrr.h"
#include "cDryCellGauge2.h"

// 00CEC1E0  cDryCellGauge2::vf00  size=30  [class]
undefined4 __thiscall cDryCellGauge2::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_16();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEC200  FUN_00cec200  size=462  [callgraph]
undefined4 __fastcall FUN_00cec200(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x1ec);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x1e8) != 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xc0) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0xc0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x120) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x120) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0xc0),5);
      }
      *(undefined4 *)(param_1 + 500) = 1;
      fVar1 = (float)(DAT_01dc0880 + -1);
      if (DAT_01dc0880 + -1 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x138),fVar1 * 0.404 + 2.1);
      *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
      *(undefined4 *)(param_1 + 0x1f0) = 0;
    }
  }
  else {
    if (iVar2 == 1) {
      *(int *)(param_1 + 0x1f0) = *(int *)(param_1 + 0x1f0) + 1;
      uVar3 = *(uint *)(param_1 + 0x1f0);
      uVar4 = (int)(((int)uVar3 >> 0x1f & 3U) + uVar3) >> 2;
      uVar3 = uVar3 & 0x80000003;
      bVar6 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar6 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
      }
      if (bVar6) {
        iVar2 = *(int *)(param_1 + 0x18);
        uVar3 = *(uint *)(param_1 + 0x120 + uVar4 * 4);
        if (((iVar2 != 0) && (uVar3 < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = uVar3 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cded00(*(undefined4 *)(param_1 + 0x120 + uVar4 * 4),5);
        }
      }
      if (uVar4 == DAT_01dc0880 - 1U) {
        *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        *(uint *)(param_1 + 0x2b8) = *(uint *)(param_1 + 0x2b8) | 0x100;
        *(uint *)(param_1 + 0x2b8) = *(uint *)(param_1 + 0x2b8) | 1;
      }
      else {
        uVar4 = uVar4 + 1;
        if (uVar4 < DAT_01dc0880 - 1U) {
          puVar5 = (uint *)(param_1 + 0x120 + uVar4 * 4);
          do {
            iVar2 = *(int *)(param_1 + 0x18);
            if (((iVar2 != 0) && (*puVar5 < *(uint *)(iVar2 + 0x80))) &&
               (iVar2 = *puVar5 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
              *(undefined4 *)(iVar2 + 0x3b0) = 0;
            }
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar4 < DAT_01dc0880 - 1U);
          return 0;
        }
      }
      return 0;
    }
    if (iVar2 == 2) {
      return 1;
    }
  }
  return 0;
}

// 00CEC3D0  FUN_00cec3d0  size=46  [callgraph]
void __fastcall FUN_00cec3d0(int param_1)

{
  if (*(int *)(param_1 + 0x3dc) != 0) {
    FUN_00cdeec0(2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0x18);
  }
  DAT_01dc08b0 = 0;
  return;
}

// 00CEC400  FUN_00cec400  size=1055  [callgraph]
void __fastcall FUN_00cec400(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  
  FUN_00cd2270(*(undefined4 *)(param_1 + 0x90),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xa0),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xa8),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xb0),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xb4),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xb8),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xc4),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 200),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xcc),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xd4),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xd8),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xdc),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xe0),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xec),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xf0),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xf4),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0xf8),10,0x41a00000,0x42c80000);
  FUN_00cd2270(*(undefined4 *)(param_1 + 0x138),10,0x41a00000,0x42c80000);
  puVar5 = (uint *)(param_1 + 0x14c);
  piVar4 = (int *)(param_1 + 0x324);
  iVar3 = 5;
  do {
    iVar2 = *piVar4;
    uVar1 = puVar5[-1];
    if (iVar2 != 0) {
      if ((((uVar1 < *(uint *)(iVar2 + 0x80)) &&
           (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
          (iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0)) && (*(int *)(iVar2 + 4) == 0x1f5)) {
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0x38) + 10;
      }
      iVar2 = *piVar4;
      if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
         ((iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0 &&
          ((iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0 && (*(int *)(iVar2 + 4) == 0x1f5)))))) {
        *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x3c) + 20.0;
        *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x40) + 100.0;
      }
    }
    iVar2 = *piVar4;
    uVar1 = *puVar5;
    if (iVar2 != 0) {
      if ((((uVar1 < *(uint *)(iVar2 + 0x80)) &&
           (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
          (iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0)) && (*(int *)(iVar2 + 4) == 0x1f5)) {
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0x38) + 10;
      }
      iVar2 = *piVar4;
      if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
         ((iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0 &&
          ((iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0 && (*(int *)(iVar2 + 4) == 0x1f5)))))) {
        *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x3c) + 20.0;
        *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x40) + 100.0;
      }
    }
    iVar2 = *piVar4;
    uVar1 = puVar5[1];
    if (iVar2 != 0) {
      if ((((uVar1 < *(uint *)(iVar2 + 0x80)) &&
           (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) &&
          (iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0)) && (*(int *)(iVar2 + 4) == 0x1f5)) {
        *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0x38) + 10;
      }
      iVar2 = *piVar4;
      if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
         ((iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0 &&
          ((iVar2 = *(int *)(iVar2 + 0x3f4), iVar2 != 0 && (*(int *)(iVar2 + 4) == 0x1f5)))))) {
        *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x3c) + 20.0;
        *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x40) + 100.0;
      }
    }
    puVar5 = puVar5 + 5;
    piVar4 = piVar4 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00CEC820  FUN_00cec820  size=266  [callgraph]
void __fastcall FUN_00cec820(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x78))();
  if (iVar2 == 2) {
    if (*(int *)(param_1 + 0x3dc) != 0) {
      FUN_00cdeec0(0);
    }
    if (*(int *)(param_1 + 0x3dc) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x3dc) + 0x8c);
    }
    iVar3 = FUN_00e03ea0("sign_21");
    iVar2 = *(int *)(param_1 + 0x3dc);
    if (((iVar2 != 0) && (uVar4 < *(uint *)(iVar2 + 0x80))) &&
       (piVar1 = *(int **)(uVar4 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 1) {
        piVar1[9] = iVar3;
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0x13);
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x3dc) != 0) {
      FUN_00cdeec0(1);
    }
    if (*(int *)(param_1 + 0x3dc) == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = (uint)*(ushort *)(*(int *)(param_1 + 0x3dc) + 0x8c);
    }
    iVar3 = FUN_00e03ea0("sign_20");
    iVar2 = *(int *)(param_1 + 0x3dc);
    if (((iVar2 != 0) && (uVar4 < *(uint *)(iVar2 + 0x80))) &&
       (piVar1 = *(int **)(uVar4 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 1) {
        piVar1[9] = iVar3;
      }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0x14);
    }
  }
  return;
}

// 00CEC930  FUN_00cec930  size=490  [callgraph]
void __fastcall FUN_00cec930(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x3fc) != DAT_01dc08ac) {
    if (*(int *)(param_1 + 0x3fc) == 0) {
      if (((byte)DAT_01bea090 & 0x40) == 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(0x15);
        }
      }
      else if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdef90(0x15,1);
        puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
        *puVar1 = *puVar1 | 0x2000000;
        goto LAB_00ceca60;
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
      *puVar1 = *puVar1 | 0x2000000;
    }
    else {
      piVar2 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar2 + 0x78))();
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        if (((iVar3 != 0) && (*(uint *)(param_1 + 0x104) < *(uint *)(iVar3 + 0x80))) &&
           (iVar3 = *(uint *)(param_1 + 0x104) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x3b0) = 0;
        }
      }
      else {
        piVar2 = (int *)FUN_00c13920();
        iVar3 = (**(code **)(*piVar2 + 0x78))();
        if ((iVar3 == *(int *)(param_1 + 0x400)) && (DAT_01dc08b4 == 0)) {
          if (*(int *)(param_1 + 0x18) != 0) {
            FUN_00cdeec0(0x16);
          }
        }
        else {
          FUN_00cec820();
          if (*(int *)(param_1 + 0x18) != 0) {
            FUN_00cdeec0(0x17);
          }
          piVar2 = (int *)FUN_00c13920();
          uVar4 = (**(code **)(*piVar2 + 0x78))();
          *(undefined4 *)(param_1 + 0x400) = uVar4;
        }
        iVar3 = *(int *)(param_1 + 0x18);
        if (((iVar3 != 0) && (*(uint *)(param_1 + 0x104) < *(uint *)(iVar3 + 0x80))) &&
           (iVar3 = *(uint *)(param_1 + 0x104) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x3b0) = 1;
        }
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
      *puVar1 = *puVar1 & 0xfdffffff;
      DAT_01dc08b4 = 0;
    }
  }
LAB_00ceca60:
  if (*(int *)(param_1 + 0x400) == -1) {
    *(int *)(param_1 + 0x3fc) = DAT_01dc08ac;
    return;
  }
  if (*(int *)(param_1 + 0x400) == 2) {
    uVar4 = 0xd92bb0f;
  }
  else {
    uVar4 = 0x23a6f56d;
  }
  iVar3 = FUN_009516c0(uVar4);
  if (iVar3 != *(int *)(param_1 + 0x404)) {
    if (-1 < iVar3) {
      FUN_00ca84a0(iVar3,local_8,8);
      FUN_00cce090(*(undefined4 *)(param_1 + 0x10c),local_8);
      FUN_00cce090(*(undefined4 *)(param_1 + 0x110),local_8);
      *(int *)(param_1 + 0x404) = iVar3;
      *(int *)(param_1 + 0x3fc) = DAT_01dc08ac;
      return;
    }
    *(int *)(param_1 + 0x3fc) = DAT_01dc08ac;
    return;
  }
  *(int *)(param_1 + 0x3fc) = DAT_01dc08ac;
  return;
}

// 00D3AD30  cDryCellGauge2::vf08  size=3002  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cDryCellGauge2::vf08(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  float10 fVar11;
  uint *local_c;
  int local_8 [2];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar9;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x8e);
  }
  *(uint *)(param_1 + 0x94) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x90);
  }
  *(uint *)(param_1 + 0x98) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x92);
  }
  *(uint *)(param_1 + 0x9c) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x94);
  }
  *(uint *)(param_1 + 0xa0) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x96);
  }
  *(uint *)(param_1 + 0xa4) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x98);
  }
  *(uint *)(param_1 + 0xa8) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0xac) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x9e);
  }
  *(uint *)(param_1 + 0xb0) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  *(uint *)(param_1 + 0xb4) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xa2);
  }
  *(uint *)(param_1 + 0xb8) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xa4);
  }
  *(uint *)(param_1 + 0xbc) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xae);
  }
  *(uint *)(param_1 + 0xc0) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb0);
  }
  *(uint *)(param_1 + 0xc4) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb2);
  }
  *(uint *)(param_1 + 200) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb4);
  }
  *(uint *)(param_1 + 0xcc) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xc2);
  }
  *(uint *)(param_1 + 0xd0) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xc4);
  }
  *(uint *)(param_1 + 0xd4) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xc6);
  }
  *(uint *)(param_1 + 0xd8) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 200);
  }
  *(uint *)(param_1 + 0xdc) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xca);
  }
  *(uint *)(param_1 + 0xe0) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xcc);
  }
  *(uint *)(param_1 + 0xe4) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xd6);
  }
  *(uint *)(param_1 + 0xe8) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xd8);
  }
  *(uint *)(param_1 + 0xec) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xda);
  }
  *(uint *)(param_1 + 0xf0) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xdc);
  }
  *(uint *)(param_1 + 0xf4) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xde);
  }
  *(uint *)(param_1 + 0xf8) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xe0);
  }
  *(uint *)(param_1 + 0xfc) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xe2);
  }
  *(uint *)(param_1 + 0x100) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xea);
  }
  *(uint *)(param_1 + 0x104) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xec);
  }
  *(uint *)(param_1 + 0x108) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xee);
  }
  *(uint *)(param_1 + 0x10c) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xf2);
  }
  *(uint *)(param_1 + 0x110) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0xfe);
  }
  *(uint *)(param_1 + 0x114) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x100);
  }
  *(uint *)(param_1 + 0x118) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x102);
  }
  *(uint *)(param_1 + 0x11c) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x112);
  }
  *(uint *)(param_1 + 0x120) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x114);
  }
  local_c = (uint *)(param_1 + 0x124);
  *local_c = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x116);
  }
  *(uint *)(param_1 + 0x128) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x118);
  }
  *(uint *)(param_1 + 300) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x11a);
  }
  *(uint *)(param_1 + 0x130) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x11c);
  }
  *(uint *)(param_1 + 0x134) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x140);
  }
  *(uint *)(param_1 + 0x138) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x148);
  }
  *(uint *)(param_1 + 0x13c) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x14a);
  }
  *(uint *)(param_1 + 0x140) = uVar8;
  if (iVar2 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x144) = uVar8;
  if (DAT_01bea030 == 8) {
    if ((((iVar2 != 0) && (uVar9 < *(uint *)(iVar2 + 0x80))) &&
        (piVar5 = *(int **)(*(int *)(iVar2 + 0x7c) + 0x3f0 + uVar9 * 0x400), piVar5 != (int *)0x0))
       && (iVar2 = (**(code **)(*piVar5 + 8))(), iVar2 == 3)) {
      uVar3 = FUN_00e03ea0("HUD_CHARA_NAME_S_0025");
      piVar5[0x2a] = -1;
      piVar5[0x2b] = 0;
      if (((piVar5[5] != 0) && (*(int *)(piVar5[5] + 4) != 0)) &&
         (iVar2 = FUN_00cb1cd0(uVar3), -1 < iVar2)) {
        piVar5[0x2a] = iVar2;
        piVar5[0x2b] = 0;
        piVar5[0x2e] = 0;
      }
    }
  }
  else if (DAT_01bea030 == 9) {
    FUN_00cf9770(uVar9,"HUD_CHARA_NAME_S_0010",0,0xffffffff);
  }
  puVar10 = (uint *)(param_1 + 0x14c);
  piVar5 = (int *)(param_1 + 0x324);
  local_8[0] = 5;
  do {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else if (((*local_c < *(uint *)(iVar2 + 0x80)) &&
             (piVar4 = *(int **)(*local_c * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
             piVar4 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar4 + 8))(), iVar2 == 0)) {
      piVar4 = piVar4 + 4;
    }
    else {
      piVar4 = (int *)0x0;
    }
    *piVar5 = (int)piVar4;
    if (piVar4 == (int *)0x0) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)((int)piVar4 + 0xb6);
    }
    puVar10[-1] = uVar9;
    if (*piVar5 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(*piVar5 + 0xb8);
    }
    *puVar10 = uVar8;
    if (*piVar5 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(*piVar5 + 0xba);
    }
    puVar10[1] = uVar8;
    if (*piVar5 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(*piVar5 + 0xbc);
    }
    puVar10[2] = uVar8;
    if (*piVar5 == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(*piVar5 + 0xbe);
    }
    puVar10[3] = uVar8;
    iVar2 = *piVar5;
    if (((iVar2 != 0) && (uVar9 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar9 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *piVar5;
    if (((iVar2 != 0) && (puVar10[1] < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = puVar10[1] * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    local_c = local_c + 1;
    puVar10 = puVar10 + 5;
    piVar5 = piVar5 + 7;
    local_8[0] = local_8[0] + -1;
  } while (local_8[0] != 0);
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 == 0) || (*(uint *)(iVar2 + 0x80) <= *(uint *)(param_1 + 0x108))) ||
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0x108) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar5 == (int *)0x0 || (iVar2 = (**(code **)(*piVar5 + 8))(), iVar2 != 0)))) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar5 + 4;
  }
  *(int **)(param_1 + 0x3dc) = piVar5;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(7);
  }
  FUN_0095c6a0(local_8,&DAT_016bc034);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((((iVar2 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar2 + 0x80))) &&
      (piVar5 = *(int **)(*(uint *)(param_1 + 0xdc) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar5 != (int *)0x0)) && (iVar2 = (**(code **)(*piVar5 + 8))(), iVar2 == 4)) {
    FUN_00cb3cc0(piVar5,local_8);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf4) < *(uint *)(iVar2 + 0x80))) &&
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0xf4) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
      piVar5 != (int *)0x0 && (iVar2 = (**(code **)(*piVar5 + 8))(), iVar2 == 4)))) {
    FUN_00cb3cc0(piVar5,local_8);
  }
  fVar1 = 1.0;
  if (_DAT_01dc088c != 0.0) {
    fVar1 = _DAT_01dc0888 / _DAT_01dc088c;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(float *)(param_1 + 0x1b8) = fVar1;
  uVar9 = *(uint *)(param_1 + 0x98);
  fVar1 = (fVar1 - 1.0) * 280.0 + 200.0;
  *(float *)(param_1 + 0x3a0) = fVar1;
  if (((iVar2 != 0) && (uVar9 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
    if (uVar9 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar9 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    fVar11 = (float10)FUN_00ddb510(fVar1,0);
    *(float *)(iVar2 + 0xc0) = (float)fVar11;
  }
  FUN_00d13d50(0);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar9 = *(uint *)(param_1 + 0xac);
  if (((iVar2 != 0) && (uVar9 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar9 * 0x400 != 0)) {
    if (uVar9 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar9 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    *(undefined4 *)(iVar2 + 0xd0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xb4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xbc) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xbc) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xc0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xc0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xd4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xd4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xd8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xdc) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xe0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xe4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xe4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xec) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xec) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf0) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xf0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xf4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xf8) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xf8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x104) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x104) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x120) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x120) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x124) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x124) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x128) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x128) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 300) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 300) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x130) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x130) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x134) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x138) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x138) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  uVar9 = *(uint *)(param_1 + 0x13c);
  iVar2 = *(int *)(param_1 + 0x18);
  if (DAT_01dc2d70 == 0) {
    if (((iVar2 != 0) && (uVar9 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar9 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  else {
    if (((iVar2 != 0) && (uVar9 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar9 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    *(undefined4 *)(param_1 + 0x1cc) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x140) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = FUN_009c5600();
  iVar6 = FUN_00d46780();
  if ((iVar6 != 0) || (iVar6 = FUN_00d467a0(), iVar6 != 0)) {
    iVar2 = FUN_009c5640();
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_00d3b881;
    uVar3 = 0x1d;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_00d3b881;
    uVar3 = 0x1e;
  }
  FUN_00cdeec0(uVar3);
LAB_00d3b881:
  *(int *)(param_1 + 0x40c) = iVar2;
  puVar7 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7be50);
  if (puVar7 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    return;
  }
  *puVar7 = cDamageDisp::vftable;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  DAT_01dc0860 = 0;
  DAT_01dc0864 = 0;
  uVar3 = FUN_00d29960(0xf);
  puVar7[1] = uVar3;
  *(undefined4 **)(param_1 + 0x3e0) = puVar7;
  return;
}

// 00D3B8F0  FUN_00d3b8f0  size=564  [callgraph]
undefined4 __fastcall FUN_00d3b8f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_EDX;
  uint uVar3;
  float10 fVar4;
  undefined4 local_4;
  
  piVar1 = DAT_01dc14c8;
  local_4 = 0;
  switch(*(undefined4 *)(param_1 + 0x1f8)) {
  case 0:
    if (*(int *)(param_1 + 500) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 1;
  case 1:
    *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
    if (6 < *(int *)(param_1 + 0x1fc)) {
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xd4),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xd8),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xd8),extraout_EDX,3);
      *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
      return 0;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x208) = 1;
    *(undefined4 *)(param_1 + 0x1f8) = 3;
  case 3:
    iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0xd8));
    if (iVar2 == 0) {
      fVar4 = (float10)FUN_00d2dbe0(*(undefined4 *)(param_1 + 0xd8));
      *(float *)(param_1 + 0x200) = (float)fVar4;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xdc),(float)fVar4);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xdc),1);
      *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
      *(undefined4 *)(param_1 + 0x204) = 1;
      return 0;
    }
    break;
  case 4:
    uVar3 = ~(DAT_01bea094 >> 0x12) & 1;
    iVar2 = FUN_00d466f0();
    if ((((iVar2 == 0) && (piVar1 != (int *)0x0)) &&
        ((iVar2 = FUN_00b7a6d0(), iVar2 != 0 || (iVar2 = FUN_00416d50(0x34), iVar2 != 0)))) &&
       (iVar2 = (**(code **)(*piVar1 + 0x344))(), iVar2 != 0)) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xe4),1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xe4),0x1a);
    }
    fVar4 = (float10)FUN_00cfee50(*(undefined4 *)(param_1 + 0xdc));
    fVar4 = fVar4 + (float10)*(float *)(param_1 + 0x200);
    *(float *)(param_1 + 0x200) = (float)fVar4;
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0xe0),(float)fVar4);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0x200));
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xe0),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe0),uVar3,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe4),uVar3,3);
    *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
    return 0;
  case 5:
    iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0xe0));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x1f8) = *(int *)(param_1 + 0x1f8) + 1;
      return 0;
    }
    break;
  case 6:
    local_4 = 1;
  }
  return local_4;
}

// 00D3BB40  FUN_00d3bb40  size=525  [callgraph]
undefined4 __fastcall FUN_00d3bb40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 0x20c);
  uVar5 = ~(DAT_01bea094 >> 0x12) & 1;
  local_4 = 0;
  if ((iVar2 < 2) || (4 < iVar2)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + iVar4;
  switch(iVar2) {
  case 0:
    if (*(int *)(param_1 + 0x208) != 0) {
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x210) = 0;
      *(undefined4 *)(param_1 + 0x20c) = 1;
      goto switchD_00d3bb83_caseD_1;
    }
    break;
  case 1:
switchD_00d3bb83_caseD_1:
    *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    iVar2 = *(int *)(param_1 + 0x210);
    if (iVar2 < 7) goto LAB_00d3bcda;
    *(undefined4 *)(param_1 + 0x210) = 0;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xec),1);
    *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
    break;
  case 2:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xf0),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xf0),uVar5,3);
    *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
    break;
  case 3:
    iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0xf0));
    if (iVar2 == 0) {
      fVar6 = (float10)FUN_00d2dbe0(*(undefined4 *)(param_1 + 0xf0));
      *(float *)(param_1 + 0x214) = (float)fVar6;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xf4),(float)fVar6);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xf4),1);
      *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
    }
    break;
  case 4:
    fVar6 = (float10)FUN_00cfee50(*(undefined4 *)(param_1 + 0xf4));
    fVar6 = fVar6 + (float10)*(float *)(param_1 + 0x214);
    *(float *)(param_1 + 0x214) = (float)fVar6;
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0xf8),(float)fVar6);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xf8),1);
    FUN_00d13c20(1);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0xf8),uVar5,3);
    *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
    break;
  case 5:
    iVar2 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0xf8));
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
    }
    break;
  case 6:
    local_4 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x210);
LAB_00d3bcda:
  if (iVar2 == 6) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x78))();
    if (iVar2 != 0) {
      FUN_00cec820();
      piVar1 = (int *)FUN_00c13920();
      uVar3 = (**(code **)(*piVar1 + 0x78))();
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x400) = uVar3;
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x104) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x104) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x104),0x17);
      }
    }
  }
  return local_4;
}

// 00D426F0  cDryCellGauge2::vf14  size=3237  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cDryCellGauge2::vf14(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_EDX;
  int *piVar10;
  int *piVar11;
  float10 fVar12;
  undefined4 uVar13;
  float local_17c;
  int local_178;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_130 [16];
  undefined1 auStack_120 [284];
  
  fVar1 = _DAT_01dc203c;
  switch(*(undefined4 *)(param_1 + 0x228)) {
  case 0:
    local_17c = -12.0;
    if (DAT_01dc2cd8 != -1) {
      local_17c = *(float *)(&DAT_016bc140 + DAT_01dc2cd8 * 4);
    }
    fVar12 = (float10)FUN_00d2dbe0(*(undefined4 *)(param_1 + 0x11c));
    fVar12 = (float10)FUN_00cb7980(*(undefined4 *)(param_1 + 0x118),
                                   (float)(fVar12 + (float10)local_17c));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x118),(float)fVar12);
    iVar2 = FUN_00416d50(0x2e);
    if (iVar2 == 0) {
      if ((*(int *)(param_1 + 0x1ac) == 0) || (DAT_01dc2d70 == 0)) {
        iVar2 = FUN_00d29960(4);
        *(int *)(param_1 + 0x234) = iVar2;
        *(undefined4 *)(iVar2 + 0x214) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x234) + 4) = 0;
        piVar11 = (int *)(param_1 + 0x238);
        iVar2 = 2;
        do {
          iVar9 = *piVar11;
          if (iVar9 == 0) {
            iVar9 = FUN_00d29960(5);
            *piVar11 = iVar9;
            if (iVar9 != 0) {
              *(undefined4 *)(iVar9 + 0x1e8) = 0;
            }
            iVar9 = *piVar11;
            if (iVar9 != 0) goto LAB_00d42828;
          }
          else {
LAB_00d42828:
            *(undefined4 *)(iVar9 + 4) = 0;
          }
          piVar11 = piVar11 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
        goto LAB_00d42846;
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x13c),1);
      *(undefined4 *)(param_1 + 0x1d4) = 1;
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      *(undefined4 *)(param_1 + 0x228) = 10;
    }
    else {
      *(undefined4 *)(param_1 + 0x228) = 10;
      *(undefined4 *)(param_1 + 0x408) = 1;
    }
    break;
  case 1:
LAB_00d42846:
    if ((DAT_01dc1508 == 0) || (2 < *(int *)(DAT_01dc1508 + 0xa4))) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x238) != 0) {
      uVar4 = *(uint *)(param_1 + 0x22c) & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(*(int *)(param_1 + 0x238) + 4) = (uint)((int)uVar4 < 2);
    }
    goto LAB_00d4289a;
  case 3:
    uVar4 = *(uint *)(param_1 + 0x22c) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x234) + 4) = (uint)((int)uVar4 < 2);
    if (*(int *)(param_1 + 0x23c) != 0) {
      uVar4 = *(uint *)(param_1 + 0x22c) & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(*(int *)(param_1 + 0x23c) + 4) = (uint)((int)uVar4 < 2);
    }
    fVar1 = _DAT_018b8c90 + *(float *)(param_1 + 0x230);
    *(float *)(param_1 + 0x230) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
    }
LAB_00d4289a:
    iVar2 = FUN_00ca8620(param_1 + 0x22c,9);
    if (iVar2 != 0) {
LAB_00d428aa:
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    break;
  case 4:
    fVar1 = _DAT_018b8c90 + *(float *)(param_1 + 0x230);
    *(float *)(param_1 + 0x230) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x230) != 1.0) break;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x140),0);
    if (*(int *)(param_1 + 0x23c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x23c) + 4) = 1;
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      break;
    }
    goto LAB_00d428aa;
  case 5:
    uVar4 = *(uint *)(param_1 + 0x22c) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x13c),(int)uVar4 < 2);
    iVar2 = FUN_00ca8620(extraout_EDX,8);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
      *(undefined4 *)(param_1 + 0x1cc) = 1;
    }
    break;
  case 6:
    iVar2 = FUN_00ce4dd0(5);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1d4) = 1;
      *(undefined4 *)(param_1 + 0x228) = 7;
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x1ac) == 0) {
      *(uint *)(param_1 + 0x2b8) = *(uint *)(param_1 + 0x2b8) | 0x100;
      *(uint *)(param_1 + 0x2b8) = *(uint *)(param_1 + 0x2b8) | 1;
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    else {
      iVar2 = FUN_00ca8620(param_1 + 0x22c,0x1e);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
      }
    }
    break;
  case 8:
    if (*(int *)(param_1 + 0x23c) != 0) {
      uVar4 = *(uint *)(param_1 + 0x22c) & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(*(int *)(param_1 + 0x23c) + 4) = (uint)(2 < (int)uVar4);
    }
    uVar4 = *(uint *)(param_1 + 0x22c) & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x234) + 4) = (uint)(2 < (int)uVar4);
    if (*(int *)(param_1 + 0x238) != 0) {
      uVar4 = *(uint *)(param_1 + 0x22c) & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(*(int *)(param_1 + 0x238) + 4) = (uint)(2 < (int)uVar4);
    }
    iVar2 = FUN_00ca8620((uint *)(param_1 + 0x22c),0xc);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x234) != 0) {
        FUN_00cae160();
        *(undefined4 *)(param_1 + 0x234) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x238);
      if (iVar2 != 0) {
        if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
          *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        *(undefined4 *)(param_1 + 0x238) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x23c);
      if (iVar2 == 0) goto LAB_00d428aa;
      if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
        *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x228) = 10;
  case 10:
    if ((*(int *)(param_1 + 0x408) != 0) && (iVar2 = FUN_00416d50(0x2e), iVar2 == 0)) {
      *(undefined4 *)(param_1 + 0x408) = 0;
      *(undefined4 *)(param_1 + 0x228) = 0;
    }
    break;
  case 0xb:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x13c),0);
    *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    goto LAB_00d42ba9;
  case 0xc:
LAB_00d42ba9:
    if (((byte)DAT_01bea090 & 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x228) = 0;
    }
    if (DAT_01dc08ac != 0) {
      fVar12 = (float10)FUN_00cb2310(*(undefined4 *)(param_1 + 0x13c),1);
      if (*(int *)(param_1 + 0x18) == 0) {
        *(undefined4 *)(param_1 + 0x228) = 0xd;
      }
      else {
        *(float *)(*(int *)(param_1 + 0x18) + 0x5c) = (float)fVar12;
        *(undefined4 *)(param_1 + 0x228) = 0xd;
      }
    }
    break;
  case 0xd:
    if (*(int *)(param_1 + 0x18) != 0) {
      *(float *)(*(int *)(param_1 + 0x18) + 0x5c) = _DAT_01dc203c;
    }
    if (DAT_01dc08ac == 0) {
      if (fVar1 <= 0.0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x5c) = 0x3f800000;
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x13c),0);
        *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + -1;
      }
    }
    else if (1.0 <= fVar1) {
      *(int *)(param_1 + 0x228) = *(int *)(param_1 + 0x228) + 1;
    }
    break;
  case 0xe:
    if (DAT_01dc08ac == 0) {
      *(undefined4 *)(param_1 + 0x228) = 0xd;
    }
  }
  if ((*(int *)(param_1 + 0x228) < 0xb) && (((byte)DAT_01bea090 & 0x40) != 0)) {
    iVar2 = *(int *)(param_1 + 0x18);
    if ((iVar2 != 0) &&
       ((*(uint *)(param_1 + 0x140) < *(uint *)(iVar2 + 0x80) &&
        (iVar2 = *(uint *)(param_1 + 0x140) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)))) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x22c) = 0;
    if (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
        *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x238);
    if (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
        *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x238) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x23c);
    if (iVar2 != 0) {
      if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
        *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x23c) = 0;
    }
    *(undefined4 *)(param_1 + 0x228) = 0xb;
    *(uint *)(param_1 + 0x2b8) = *(uint *)(param_1 + 0x2b8) | 0x100;
    *(uint *)(param_1 + 0x2b8) = *(uint *)(param_1 + 0x2b8) & 0xfffffffe;
  }
  if ((*(int *)(param_1 + 0x228) < 1) || (8 < *(int *)(param_1 + 0x228))) {
    if (DAT_01dc087c != 0) {
      DAT_01dc087c = 0;
    }
  }
  else {
    if (DAT_01dc14a0 == 0) {
      puVar3 = &DAT_01dc14e0;
    }
    else {
      puVar3 = (undefined4 *)(DAT_01dc14a0 + 0x40);
    }
    local_160 = *puVar3;
    local_15c = puVar3[1];
    local_158 = puVar3[2];
    local_154 = puVar3[3];
    FUN_00d9fa80(&local_140,&local_160);
    iVar2 = *(int *)(param_1 + 0x238);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      *(undefined4 *)(iVar2 + 0x80) = local_140;
      *(undefined4 *)(iVar2 + 0x84) = local_13c;
    }
    FUN_00cb7920(&local_16c);
    local_150 = local_16c;
    local_14c = local_168;
    local_148 = local_164;
    local_144 = 0x3f800000;
    FUN_00caccc0(local_130,&local_150);
    if (*(int *)(param_1 + 0x234) != 0) {
      FUN_00cb5540(&local_140,local_130,*(undefined4 *)(param_1 + 0x230));
    }
    iVar2 = *(int *)(param_1 + 0x23c);
    if (iVar2 != 0) {
      uVar13 = *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x204);
      if (*(int *)(iVar2 + 0x18) != 0) {
        *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x234) + 0x200);
        *(undefined4 *)(iVar2 + 0x84) = uVar13;
      }
    }
  }
  piVar11 = DAT_01dc14c8;
  local_178 = 0;
  local_17c = 0.0;
  if (DAT_01dc14c8 != (int *)0x0) {
    local_17c = (float)FUN_00b7cda0();
    iVar2 = FUN_00b7a6d0();
    if ((((iVar2 != 0) || ((DAT_01bea094 & 0x800) != 0)) &&
        (local_178 = (**(code **)(*piVar11 + 0x344))(), local_178 == 0)) &&
       (iVar2 = FUN_00bc3230(0), iVar2 != 0)) {
      local_178 = *(int *)(param_1 + 0x304);
    }
    iVar2 = FUN_00d466f0();
    if (iVar2 != 0) {
      local_17c = 0.0;
      local_178 = 0;
      *(undefined4 *)(param_1 + 0x304) = 0;
    }
    if (local_178 != *(int *)(param_1 + 0x304)) {
      if (*(int *)(param_1 + 0x2e8) != 0) {
        (**(code **)(*(int *)(param_1 + 0x250) + 8))(0,0,0);
      }
      if ((local_178 == 0) || (*(int *)(param_1 + 0x204) == 0)) {
        iVar2 = *(int *)(param_1 + 0x18);
        if ((iVar2 != 0) &&
           ((*(uint *)(param_1 + 0xe4) < *(uint *)(iVar2 + 0x80) &&
            (iVar2 = *(uint *)(param_1 + 0xe4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)))) {
          *(undefined2 *)(iVar2 + 0x3ed) = 0x101;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if (((iVar2 != 0) && (*(uint *)(param_1 + 0xe4) < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = *(uint *)(param_1 + 0xe4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x18);
        if (((iVar2 != 0) && (*(uint *)(param_1 + 0xe4) < *(uint *)(iVar2 + 0x80))) &&
           (iVar2 = *(uint *)(param_1 + 0xe4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
          *(undefined4 *)(iVar2 + 0x3b0) = 1;
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cded00(*(undefined4 *)(param_1 + 0xe4),0x1a);
        }
      }
    }
    if (((local_17c != (float)*(int *)(param_1 + 0x308)) || (local_178 != *(int *)(param_1 + 0x304))
        ) && ((local_17c == 0.0 && (local_178 == 0)))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0x1c);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(*(undefined4 *)(param_1 + 0x1b4));
      }
      piVar10 = (int *)(param_1 + 0x324);
      iVar2 = 5;
      do {
        if (*piVar10 != 0) {
          FUN_00cdeec0(*(undefined4 *)(param_1 + 0x1b4));
        }
        piVar10 = piVar10 + 7;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  uVar4 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  if ((DAT_01bea094 & 0x40000) == 0) {
    if (((byte)DAT_01bea060 & 0x80) == 0) {
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 4) = DAT_01dc0878;
      }
      if (DAT_01dc08b0 != 0) {
        if (*(int *)(param_1 + 0x3dc) != 0) {
          FUN_00cdeec0(2);
        }
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(0x18);
        }
        DAT_01dc08b0 = 0;
      }
      if (*(int *)(param_1 + 0x300) == 0) {
        if (*(int *)(param_1 + 0x2e8) != 0) {
          uVar4 = 1;
        }
      }
      else {
        iVar2 = FUN_00cae180(0);
        if ((((iVar2 == 0) || ((DAT_01bea094 & 0x120000) != 0)) || (DAT_01dc2d54 != 0)) ||
           (DAT_01dc2d5c != 0)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
          if (*(int *)(param_1 + 0x2e8) == 0) {
            if ((*(byte *)(param_1 + 0x2b8) & 1) != 0) {
              FUN_00e01ca0();
              FUN_00dffb30(param_1 + 0x250);
              if (local_17c == 0.0) {
                if (local_178 == 0) {
                  FUN_00e00fb0(0,0x163,auStack_120);
                }
                else {
                  FUN_00e00fb0(0,0x164,auStack_120);
                }
              }
            }
            goto LAB_00d431ec;
          }
        }
        uVar4 = uVar4 | ~*(uint *)(param_1 + 0x2b8) & 1;
      }
LAB_00d431ec:
      DAT_01dc0878 = 0;
      if (uVar4 != 0) {
        if ((DAT_01bea064 & 0x4000) == 0) {
          fVar1 = 0.066;
        }
        else {
          fVar1 = 0.132;
        }
        (**(code **)(*(int *)(param_1 + 0x250) + 8))(1.0 / fVar1,0,0);
      }
    }
    else {
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      if (piVar11 != (int *)0x0) {
        iVar2 = FUN_00b7c980(1);
        iVar2 = FUN_00b7c970((float)iVar2);
        FUN_00cb7ae0((float)iVar2);
        FUN_00bc2bd0();
      }
      if (*(int *)(param_1 + 0x2e8) != 0) {
        (**(code **)(*(int *)(param_1 + 0x250) + 8))(0,0,0);
      }
    }
  }
  else {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = 1;
    }
    if (piVar11 != (int *)0x0) {
      iVar2 = FUN_00b7c980(1);
      iVar2 = FUN_00b7c970((float)iVar2);
      FUN_00cb7ae0((float)iVar2);
      FUN_00bc2bd0();
    }
  }
  FUN_00d2cfe0();
  if (*(int *)(param_1 + 0x1c8) == 0) {
    uVar4 = FUN_00cd21a0();
    uVar5 = FUN_00d23100();
    uVar6 = FUN_00cec200();
    uVar7 = FUN_00d3b8f0();
    uVar8 = FUN_00d3bb40();
    *(uint *)(param_1 + 0x1c8) = uVar8 & uVar4 & uVar5 & uVar6 & uVar7;
  }
  if (DAT_01dc08a0 != 0) {
    DAT_01dc08a0 = 0;
    *(undefined4 *)(param_1 + 0x3f4) = 1;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
  }
  if (*(int *)(param_1 + 0x3f4) != 0) {
    FUN_00d23300();
  }
  if (DAT_01dc08a4 != 0) {
    DAT_01dc08a4 = 0;
    FUN_00d23420();
  }
  FUN_00cec930();
  if ((local_17c != 0.0) || (local_178 != 0)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0x1b);
    }
    piVar11 = (int *)(param_1 + 0x324);
    iVar2 = 5;
    do {
      if (*piVar11 != 0) {
        FUN_00cdeec0(0x1b);
      }
      piVar11 = piVar11 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_009c5600();
  iVar9 = FUN_00d46780();
  if ((iVar9 != 0) || (iVar9 = FUN_00d467a0(), iVar9 != 0)) {
    iVar2 = FUN_009c5640();
  }
  if (*(int *)(param_1 + 0x40c) == iVar2) {
    *(int *)(param_1 + 0x304) = local_178;
    *(float *)(param_1 + 0x308) = local_17c;
    return;
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_00d43359;
    uVar13 = 0x1d;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_00d43359;
    uVar13 = 0x1e;
  }
  FUN_00cdeec0(uVar13);
LAB_00d43359:
  *(int *)(param_1 + 0x40c) = iVar2;
  *(int *)(param_1 + 0x304) = local_178;
  *(float *)(param_1 + 0x308) = local_17c;
  return;
}


// src/unsorted/unit_0090F470.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090F470..0090FE70, 7 functions

#include "mgrr.h"

// 0090F470  FUN_0090f470  size=204  [run]
void FUN_0090f470(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  if (((*param_5 != 0.0) && (param_5[1] != 0.0)) && (param_5[2] != 0.0)) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_29();
      iVar2 = RayCastManager::set(iVar1,param_1,param_7);
      if (iVar2 == 0) {
        return;
      }
    }
    else if (param_1 != *(int **)(iVar1 + 0x10)) {
      FUN_00dd5650(&DAT_0164c08c);
      FUN_00dd5650(&DAT_0164c6f0,param_7);
      return;
    }
    iVar2 = FUN_0090bba0(param_2,param_3,param_4,param_5,param_6,param_7,3,0);
    if (iVar2 == 0) {
      *(undefined2 *)(iVar1 + 0x1a) = 1;
    }
    return;
  }
  return;
}

// 0090F540  FUN_0090f540  size=157  [run]
void FUN_0090f540(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_5 != 0.0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_29();
      iVar2 = RayCastManager::set(iVar1,param_1,param_7);
      if (iVar2 == 0) {
        return;
      }
    }
    else if (param_1 != *(int **)(iVar1 + 0x10)) {
      FUN_00dd5650(&DAT_0164c08c);
      FUN_00dd5650(&DAT_0164c730,param_7);
      return;
    }
    iVar2 = FUN_0090bff0(param_2,param_3,param_4,param_5,param_6,param_7,3,0);
    if (iVar2 == 0) {
      *(undefined2 *)(iVar1 + 0x1a) = 1;
    }
  }
  return;
}

// 0090F870  FUN_0090f870  size=213  [run]
void FUN_0090f870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  
  if (((*param_5 != 0.0) && (param_5[1] != 0.0)) && (param_5[2] != 0.0)) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = FUN_0090f060();
      iVar2 = RayCastManager::set(iVar1,param_1,param_8);
      if (iVar2 == 0) {
        return;
      }
    }
    else if (param_1 != *(int **)(iVar1 + 0x10)) {
      FUN_00dd5650(&DAT_0164c08c);
      FUN_00dd5650(&DAT_0164c8e0,param_8);
      return;
    }
    iVar2 = FUN_0090c850(param_2,param_3,param_4,param_5,param_6,param_7,0,0,0,param_8,4);
    if (iVar2 == 0) {
      *(undefined2 *)(iVar1 + 0x1a) = 1;
    }
    return;
  }
  return;
}

// 0090FA30  FUN_0090fa30  size=205  [run]
void FUN_0090fa30(int *param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  
  if (param_4 != 0.0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      _Dst = (void *)FUN_00dd29b0(0x210,0x10,0,0);
      iVar1 = 0;
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,0x210);
        iVar1 = hkpAllCdPointCollector::hkpAllCdPointCollector_30();
      }
      iVar2 = RayCastManager::set(iVar1,param_1,param_7);
      if (iVar2 == 0) {
        return;
      }
    }
    else if (param_1 != *(int **)(iVar1 + 0x10)) {
      FUN_00dd5650(&DAT_0164c08c);
      FUN_00dd5650(&DAT_0164c920,param_7);
      return;
    }
    iVar2 = FUN_0090ca20(param_2,param_3,param_4,param_5,param_6,0,0,0,param_7,4);
    if (iVar2 == 0) {
      *(undefined2 *)(iVar1 + 0x1a) = 1;
    }
  }
  return;
}

// 0090FB00  FUN_0090fb00  size=222  [run]
void FUN_0090fb00(int *param_1)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  if (0.0 < (float)param_1[0xc]) {
    piVar1 = (int *)*param_1;
    if (*piVar1 == 0) {
      _Dst = (void *)FUN_00dd29b0(0x210,0x10,0,0);
      iVar2 = 0;
      if (_Dst != (void *)0x0) {
        _memset(_Dst,0,0x210);
        iVar2 = hkpAllCdPointCollector::hkpAllCdPointCollector_30();
      }
      iVar3 = RayCastManager::set(iVar2,*param_1,param_1[0x11]);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      iVar2 = *piVar1;
      if (iVar2 == 0) {
LAB_0090fbc7:
        FUN_00dd5650(&DAT_0164c920,param_1[0x11]);
        return;
      }
      if (piVar1 != *(int **)(iVar2 + 0x10)) {
        FUN_00dd5650(&DAT_0164c08c);
        goto LAB_0090fbc7;
      }
      if (iVar2 == 0) goto LAB_0090fbc7;
    }
    iVar3 = FUN_0090ca20(param_1[1],param_1 + 4,param_1[0xc],param_1 + 8,param_1[0xd],param_1[0xe],
                         param_1[0xf],param_1[0x10],param_1[0x11],4);
    if (iVar3 == 0) {
      *(undefined2 *)(iVar2 + 0x1a) = 1;
    }
  }
  return;
}

// 0090FD80  FUN_0090fd80  size=235  [run]
undefined4
FUN_0090fd80(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int local_1f0;
  short local_1e4;
  char local_1da;
  char local_1d5;
  undefined1 local_1c0 [444];
  
  if (((*param_4 == 0.0) || (param_4[1] == 0.0)) || (param_4[2] == 0.0)) {
    return 0;
  }
  hkpAllCdPointCollector::hkpAllCdPointCollector_31();
  FUN_0090bba0(0xffffffff,param_2,param_3,param_4,param_5,param_6,3,1);
  if ((local_1d5 != '\0') && (local_1e4 < 1)) {
    (**(code **)(local_1f0 + 8))();
    FUN_009053f0();
  }
  if (local_1da == '\0') {
    hkpCdPointCollector::hkpCdPointCollector_21();
    return 0;
  }
  if (param_1 != 0) {
    FUN_0090e700(local_1c0);
  }
  hkpCdPointCollector::hkpCdPointCollector_21();
  return 1;
}

// 0090FE70  FUN_0090fe70  size=768  [run]
void __thiscall FUN_0090fe70(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int local_10;
  
  iVar1 = param_2[1];
  iVar10 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar10 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar7 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar7 <= iVar1) {
      iVar7 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar7,0x60);
  }
  iVar7 = *param_2;
  iVar9 = *param_1;
  if (0 < iVar10) {
    puVar5 = (undefined4 *)(iVar7 + 0x18);
    puVar6 = (undefined4 *)(iVar9 + 0x10);
    iVar12 = iVar10;
    do {
      uVar2 = puVar5[-5];
      uVar3 = puVar5[-4];
      uVar4 = puVar5[-3];
      puVar6[-4] = puVar5[-6];
      puVar6[-3] = uVar2;
      puVar6[-2] = uVar3;
      puVar6[-1] = uVar4;
      *puVar6 = *(undefined4 *)((iVar7 - iVar9) + (int)puVar6);
      puVar6[1] = puVar5[-1];
      puVar6[2] = *puVar5;
      puVar6[3] = puVar5[1];
      puVar6[4] = puVar5[2];
      puVar6[5] = puVar5[3];
      puVar6[6] = puVar5[4];
      puVar6[7] = puVar5[5];
      puVar6[8] = puVar5[6];
      puVar6[9] = puVar5[7];
      puVar6[10] = puVar5[8];
      puVar6[0xb] = puVar5[9];
      puVar6[0xc] = puVar5[10];
      puVar6[0x10] = puVar5[0xe];
      puVar5 = puVar5 + 0x18;
      puVar6 = puVar6 + 0x18;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  iVar9 = *param_1 + iVar10 * 0x60;
  iVar12 = *param_2 + iVar10 * 0x60;
  iVar10 = iVar1 - iVar10;
  iVar7 = 0;
  if (3 < iVar10) {
    puVar5 = (undefined4 *)(iVar9 + 0x70);
    puVar6 = (undefined4 *)(iVar12 + 0x78);
    local_10 = (iVar10 - 4U >> 2) + 1;
    iVar7 = local_10 * 4;
    do {
      if (puVar5 != (undefined4 *)0x70) {
        uVar2 = puVar6[-0x1d];
        uVar3 = puVar6[-0x1c];
        uVar4 = puVar6[-0x1b];
        puVar5[-0x1c] = puVar6[-0x1e];
        puVar5[-0x1b] = uVar2;
        puVar5[-0x1a] = uVar3;
        puVar5[-0x19] = uVar4;
        puVar5[-0x18] = puVar6[-0x1a];
        puVar5[-0x17] = puVar6[-0x19];
        puVar5[-0x16] = puVar6[-0x18];
        puVar5[-0x15] = puVar6[-0x17];
        puVar11 = puVar6 + -0x16;
        puVar13 = puVar5 + -0x14;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar5[-0xc] = puVar6[-0xe];
        puVar5[-8] = puVar6[-10];
      }
      if (puVar5 != (undefined4 *)0x10) {
        uVar2 = puVar6[-5];
        uVar3 = puVar6[-4];
        uVar4 = puVar6[-3];
        puVar5[-4] = puVar6[-6];
        puVar5[-3] = uVar2;
        puVar5[-2] = uVar3;
        puVar5[-1] = uVar4;
        *puVar5 = *(undefined4 *)((iVar12 - iVar9) + (int)puVar5);
        puVar5[1] = puVar6[-1];
        puVar5[2] = *puVar6;
        puVar5[3] = puVar6[1];
        puVar11 = puVar6 + 2;
        puVar13 = puVar5 + 4;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar5[0xc] = puVar6[10];
        puVar5[0x10] = puVar6[0xe];
      }
      if (puVar5 + 0x14 != (undefined4 *)0x0) {
        uVar2 = puVar6[0x13];
        uVar3 = puVar6[0x14];
        uVar4 = puVar6[0x15];
        puVar5[0x14] = puVar6[0x12];
        puVar5[0x15] = uVar2;
        puVar5[0x16] = uVar3;
        puVar5[0x17] = uVar4;
        puVar5[0x18] = puVar6[0x16];
        puVar5[0x19] = puVar6[0x17];
        puVar5[0x1a] = puVar6[0x18];
        puVar5[0x1b] = puVar6[0x19];
        puVar11 = puVar6 + 0x1a;
        puVar13 = puVar5 + 0x1c;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar5[0x24] = puVar6[0x22];
        puVar5[0x28] = puVar6[0x26];
      }
      if (puVar5 + 0x2c != (undefined4 *)0x0) {
        uVar2 = puVar6[0x2b];
        uVar3 = puVar6[0x2c];
        uVar4 = puVar6[0x2d];
        puVar5[0x2c] = puVar6[0x2a];
        puVar5[0x2d] = uVar2;
        puVar5[0x2e] = uVar3;
        puVar5[0x2f] = uVar4;
        puVar5[0x30] = puVar6[0x2e];
        puVar5[0x31] = puVar6[0x2f];
        puVar5[0x32] = puVar6[0x30];
        puVar5[0x33] = puVar6[0x31];
        puVar11 = puVar6 + 0x32;
        puVar13 = puVar5 + 0x34;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar5[0x3c] = puVar6[0x3a];
        puVar5[0x40] = puVar6[0x3e];
      }
      puVar5 = puVar5 + 0x60;
      puVar6 = puVar6 + 0x60;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  if (iVar10 <= iVar7) {
    param_1[1] = iVar1;
    return;
  }
  puVar5 = (undefined4 *)(iVar7 * 0x60 + 0x18 + iVar12);
  puVar6 = (undefined4 *)(iVar7 * 0x60 + 0x10 + iVar9);
  iVar10 = iVar10 - iVar7;
  do {
    if (puVar6 != (undefined4 *)0x10) {
      uVar2 = puVar5[-5];
      uVar3 = puVar5[-4];
      uVar4 = puVar5[-3];
      puVar6[-4] = puVar5[-6];
      puVar6[-3] = uVar2;
      puVar6[-2] = uVar3;
      puVar6[-1] = uVar4;
      *puVar6 = *(undefined4 *)((iVar12 - iVar9) + (int)puVar6);
      puVar6[1] = puVar5[-1];
      puVar6[2] = *puVar5;
      puVar6[3] = puVar5[1];
      puVar11 = puVar5 + 2;
      puVar13 = puVar6 + 4;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      puVar6[0xc] = puVar5[10];
      puVar6[0x10] = puVar5[0xe];
    }
    puVar6 = puVar6 + 0x18;
    puVar5 = puVar5 + 0x18;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  param_1[1] = iVar1;
  return;
}


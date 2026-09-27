// src/unsorted/unit_00D3E080.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D3E080..00D3E1A0, 2 functions

#include "types.h"

// 00D3E080  FUN_00d3e080  size=286  [run]
void __fastcall FUN_00d3e080(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_01dc127c < 1) && (DAT_01dc1308 == 0)) {
    if (DAT_01dc1274 != 0) {
      if (*(int *)(param_1 + 4) == 0) {
        uVar2 = FUN_00d31f80();
        *(undefined4 *)(param_1 + 4) = uVar2;
        DAT_018b56b4 = 0;
      }
      if (*(int *)(param_1 + 8) == 0) {
        uVar2 = FUN_00d31fe0();
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
    }
  }
  else {
    DAT_01dc127c = DAT_01dc127c + -1;
    DAT_01dc1274 = 0;
    DAT_01dc1278 = 1;
    if (DAT_01dc127c < 0) {
      DAT_01dc127c = 0;
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    if (DAT_01dc1274 != 0) {
      FUN_00cbc7b0(DAT_01dc1280);
      if (*(int *)(param_1 + 8) != 0) {
        FUN_00cbd090(DAT_01dc1280);
      }
    }
    if (DAT_018b56b4 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0xac) = 1;
      if (*(int *)(param_1 + 8) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 8) + 0x17c) = 1;
      }
    }
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 4))();
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
    if ((4 < (int)puVar1[0x26]) || (DAT_01dc1278 != 0)) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
        *(undefined4 *)(param_1 + 4) = 0;
      }
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 8))(1);
        *(undefined4 *)(param_1 + 8) = 0;
      }
      DAT_018b56b4 = 0;
      DAT_01dc1278 = 0;
    }
    DAT_01dc1280 = 0;
  }
  if (DAT_018b56b0 != 0) {
    DAT_01dc1274 = 0;
  }
  return;
}

// 00D3E1A0  FUN_00d3e1a0  size=999  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d3e1a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  float10 fVar16;
  float10 fVar17;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_14;
  
  piVar15 = (int *)(param_1 + 0x30);
  uVar14 = 0;
  do {
    if ((*(int *)((int)&DAT_01dc12d4 + uVar14) == 0) ||
       (iVar12 = *(int *)((int)&DAT_01dc1284 + uVar14), iVar12 == 0)) {
      if ((undefined4 *)piVar15[-10] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar15[-10])(1);
        piVar15[-10] = 0;
      }
    }
    else if (piVar15[-10] == 0) {
      iVar12 = cSlashPointDispParts::cSlashPointDispParts();
      piVar15[-10] = iVar12;
    }
    else {
      iVar11 = *(int *)(piVar15[-10] + 0x14);
      if ((iVar11 != 0) && (*(int *)(iVar11 + 0x18) != 0)) {
        uStack_40 = *(undefined4 *)(iVar12 + 0x40);
        uStack_3c = *(undefined4 *)(iVar12 + 0x44);
        uStack_38 = *(undefined4 *)(iVar12 + 0x48);
        uStack_34 = *(undefined4 *)(iVar12 + 0x4c);
        iVar12 = FUN_00d9fa80(&uStack_30,&uStack_40);
        if (iVar12 != 0) {
          FUN_00cd5dd0(*(undefined4 *)((int)&DAT_01dbf964 + uVar14));
          iVar12 = piVar15[-10];
          *(undefined4 *)(iVar12 + 0x50) = uStack_30;
          *(undefined4 *)(iVar12 + 0x54) = uStack_2c;
          *(undefined4 *)(iVar12 + 0x58) = uStack_28;
          *(undefined4 *)(iVar12 + 0x5c) = uStack_24;
          *(undefined4 *)(piVar15[-10] + 0x4c) = 1;
        }
      }
    }
    if ((*(int *)((int)&DAT_01dc12d4 + uVar14) == 0) ||
       (iVar12 = *(int *)((int)&DAT_01dc1284 + uVar14), iVar12 == 0)) {
      if ((undefined4 *)*piVar15 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar15)(1);
        *piVar15 = 0;
      }
    }
    else {
      puVar10 = (undefined4 *)*piVar15;
      if (puVar10 == (undefined4 *)0x0) {
LAB_00d3e2bf:
        *piVar15 = 0;
      }
      else if ((puVar10[5] != 0) && (*(int *)(puVar10[5] + 0x18) != 0)) {
        if (iVar12 != *(int *)((int)&DAT_01dc12ac + uVar14)) {
          (**(code **)*puVar10)(1);
          goto LAB_00d3e2bf;
        }
        uVar13 = *(undefined4 *)(iVar12 + 0x40);
        uVar1 = *(undefined4 *)(iVar12 + 0x44);
        uVar2 = *(undefined4 *)(iVar12 + 0x48);
        uVar3 = *(undefined4 *)(iVar12 + 0x4c);
        fVar4 = *(float *)(iVar12 + 0x10);
        fVar5 = *(float *)(iVar12 + 0x14);
        fVar6 = *(float *)(iVar12 + 0x18);
        fVar7 = *(float *)(iVar12 + 0x20);
        fVar8 = *(float *)(iVar12 + 0x24);
        fVar9 = *(float *)(iVar12 + 0x28);
        fVar16 = SQRT((float10)*(float *)(iVar12 + 0x38) * (float10)*(float *)(iVar12 + 0x38) +
                      (float10)*(float *)(iVar12 + 0x34) * (float10)*(float *)(iVar12 + 0x34) +
                      (float10)*(float *)(iVar12 + 0x30) * (float10)*(float *)(iVar12 + 0x30));
        fVar17 = (float10)fpatan((float10)*(float *)(iVar12 + 0x28) / fVar16,
                                 (float10)*(float *)(iVar12 + 0x38) / fVar16);
        fStack_20 = (float)fVar17;
        fVar16 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)(iVar12 + 0x18) / fVar16));
        iVar11 = *piVar15;
        fVar17 = (float10)fpatan((float10)*(float *)(iVar12 + 0x14) /
                                 (float10)SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9),
                                 (float10)*(float *)(iVar12 + 0x10) /
                                 (float10)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6));
        *(undefined4 *)(iVar11 + 0x30) = uVar13;
        *(undefined4 *)(iVar11 + 0x34) = uVar1;
        *(undefined4 *)(iVar11 + 0x38) = uVar2;
        *(undefined4 *)(iVar11 + 0x3c) = uVar3;
        iVar12 = *piVar15;
        *(float *)(iVar12 + 0x40) = fStack_20;
        *(float *)(iVar12 + 0x44) = (float)fVar16;
        *(float *)(iVar12 + 0x48) = (float)fVar17;
        *(undefined4 *)(iVar12 + 0x4c) = uStack_14;
      }
    }
    if ((int *)piVar15[-10] != (int *)0x0) {
      (**(code **)(*(int *)piVar15[-10] + 4))();
    }
    if ((int *)*piVar15 != (int *)0x0) {
      (**(code **)(*(int *)*piVar15 + 4))();
    }
    uVar14 = uVar14 + 4;
    piVar15 = piVar15 + 1;
    if (0x27 < uVar14) {
      if (DAT_01dc1300 == 0) {
        if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(param_1 + 4))(1);
          *(undefined4 *)(param_1 + 4) = 0;
        }
      }
      else {
        iVar12 = *(int *)(param_1 + 4);
        if (iVar12 == 0) {
          uVar13 = cQTECallAlarmParts::cQTECallAlarmParts();
          *(undefined4 *)(param_1 + 4) = uVar13;
        }
        else if ((*(int *)(iVar12 + 0x14) != 0) && (*(int *)(*(int *)(iVar12 + 0x14) + 0x18) != 0))
        {
          *(undefined4 *)(iVar12 + 0x40) = 1;
          iVar11 = DAT_01dc12fc;
          iVar12 = *(int *)(param_1 + 4);
          if (DAT_01dc12fc != *(int *)(iVar12 + 0x44)) {
            FUN_00d15620(DAT_01dc12fc);
            *(uint *)(iVar12 + 0x48) = (uint)DAT_01dc1418;
            *(int *)(iVar12 + 0x44) = iVar11;
          }
        }
      }
      if (*(int **)(param_1 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 4) + 4))();
      }
      _DAT_01dc12d0 = DAT_01dc12a8;
      _DAT_01dc12cc = DAT_01dc12a4;
      _DAT_01dc12c8 = DAT_01dc12a0;
      DAT_01dc12ac = DAT_01dc1284;
      DAT_01dc12b0 = DAT_01dc1288;
      _DAT_01dc12b4 = DAT_01dc128c;
      _DAT_01dc12b8 = DAT_01dc1290;
      _DAT_01dc12bc = DAT_01dc1294;
      _DAT_01dc12c0 = DAT_01dc1298;
      _DAT_01dc12c4 = DAT_01dc129c;
      DAT_01dc1284 = 0;
      DAT_01dc12d4 = 0;
      DAT_01dc1288 = 0;
      DAT_01dc12d8 = 0;
      DAT_01dc128c = 0;
      _DAT_01dc12dc = 0;
      DAT_01dc1290 = 0;
      _DAT_01dc12e0 = 0;
      DAT_01dc1294 = 0;
      _DAT_01dc12e4 = 0;
      DAT_01dc1298 = 0;
      _DAT_01dc12e8 = 0;
      DAT_01dc129c = 0;
      _DAT_01dc12ec = 0;
      DAT_01dc12a0 = 0;
      _DAT_01dc12f0 = 0;
      DAT_01dc12a4 = 0;
      _DAT_01dc12f4 = 0;
      DAT_01dc12a8 = 0;
      _DAT_01dc12f8 = 0;
      DAT_01dc1300 = 0;
      return;
    }
  } while( true );
}


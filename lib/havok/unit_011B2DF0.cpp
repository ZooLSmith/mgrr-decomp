// lib/havok/unit_011B2DF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 011B2DF0..011B6EC0, 117 functions

#include "mgrr.h"
#include "hkpBroadPhaseListener.h"
#include "hkpContinuousSimulation.h"
#include "hkpMultiThreadedSimulation.h"

// 011B2DF0  hkpMultiThreadedSimulation::vf1C  size=1199  [run]
undefined4 __thiscall hkpMultiThreadedSimulation::vf1C(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  LPVOID pvVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  undefined2 local_70;
  undefined1 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  undefined4 local_24 [3];
  LPVOID local_18;
  undefined4 local_14;
  
  pvVar12 = TlsGetValue(DAT_01f8fc54);
  puVar3 = *(undefined4 **)((int)pvVar12 + 4);
  if (puVar3 < *(undefined4 **)((int)pvVar12 + 0xc)) {
    *puVar3 = "LtPhysics";
    puVar3[3] = "StInit";
    uVar7 = rdtsc();
    local_14 = (undefined4)uVar7;
    puVar3[1] = local_14;
    *(undefined4 **)((int)pvVar12 + 4) = puVar3 + 4;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  piVar13 = (int *)(*(int *)(param_1 + 0xc) + 0x8c);
  *piVar13 = *piVar13 + 1;
  local_40 = *(float *)(param_1 + 0x18);
  fStack_3c = local_40 + param_3;
  local_38 = fStack_3c - local_40;
  fStack_34 = 0.0;
  *(float *)(param_1 + 0x1c) = param_3;
  if (local_38 != 0.0) {
    fStack_34 = 1.0 / local_38;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  *(ulonglong *)(iVar4 + 0x1e0) = CONCAT44(fStack_3c,local_40);
  *(ulonglong *)(iVar4 + 0x1e8) = CONCAT44(fStack_34,local_38);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x70);
  *(ulonglong *)(iVar4 + 0x50) = CONCAT44(fStack_3c,local_40);
  *(ulonglong *)(iVar4 + 0x58) = CONCAT44(fStack_34,local_38);
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 0x4c) + 0x14))
            (*(int *)(param_1 + 0xc),&local_40);
  FUN_011939d0(local_24);
  piVar13 = (int *)FUN_01010f60();
  cVar11 = (**(code **)(*piVar13 + 0x1c))(local_24[0]);
  if (cVar11 == '\0') {
    iVar14 = FUN_01193ff0();
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar14 == 0) {
      if (*(char *)(iVar4 + 0x54) != '\0') {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return uVar15;
      }
      *(undefined4 *)(param_1 + 0x28) = 1;
      piVar13 = (int *)(iVar4 + 0x8c);
      *piVar13 = *piVar13 + -1;
      if ((*piVar13 == 0) && (*(char *)(iVar4 + 0x94) == '\0')) {
        if (*(int *)(iVar4 + 0x84) != 0) {
          FUN_011925d0();
        }
        if ((*(int *)(iVar4 + 0x9c) == 1) && (*(int *)(iVar4 + 0x88) != 0)) {
          FUN_011925f0();
        }
      }
      return 1;
    }
    piVar13 = (int *)(iVar4 + 0x8c);
    *piVar13 = *piVar13 + -1;
    if ((*piVar13 == 0) && (*(char *)(iVar4 + 0x94) == '\0')) {
      if (*(int *)(iVar4 + 0x84) != 0) {
        FUN_011925d0();
      }
      if ((*(int *)(iVar4 + 0x9c) == 1) && (*(int *)(iVar4 + 0x88) != 0)) {
        FUN_011925f0();
      }
    }
    FUN_011ce8f0(*(undefined4 *)(param_1 + 0xc));
    piVar13 = (int *)(*(int *)(param_1 + 0xc) + 0x8c);
    *piVar13 = *piVar13 + 1;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  *(ulonglong *)(iVar4 + 0x1e0) = CONCAT44(fStack_3c,local_40);
  *(ulonglong *)(iVar4 + 0x1e8) = CONCAT44(fStack_34,local_38);
  iVar4 = *(int *)(param_1 + 0xc);
  *(float *)(iVar4 + 0x314) = *(float *)(iVar4 + 0x328) * local_38;
  *(float *)(iVar4 + 0x318) = (float)*(int *)(iVar4 + 0x31c) * fStack_34;
  fVar1 = *(float *)(iVar4 + 0x314);
  iVar14 = *(int *)(param_1 + 0xc);
  fVar8 = *(float *)(iVar14 + 0x14);
  fVar9 = *(float *)(iVar14 + 0x18);
  fVar10 = *(float *)(iVar14 + 0x1c);
  *(float *)(iVar4 + 0x200) = fVar1 * *(float *)(iVar14 + 0x10);
  *(float *)(iVar4 + 0x204) = fVar1 * fVar8;
  *(float *)(iVar4 + 0x208) = fVar1 * fVar9;
  *(float *)(iVar4 + 0x20c) = fVar1 * fVar10;
  iVar14 = *(int *)(param_1 + 0xc);
  fVar1 = *(float *)(iVar14 + 0x14);
  fVar8 = *(float *)(iVar14 + 0x18);
  fVar9 = *(float *)(iVar14 + 0x1c);
  *(float *)(iVar4 + 0x210) = local_38 * *(float *)(iVar14 + 0x10);
  *(float *)(iVar4 + 0x214) = local_38 * fVar1;
  *(float *)(iVar4 + 0x218) = local_38 * fVar8;
  *(float *)(iVar4 + 0x21c) = local_38 * fVar9;
  **(undefined4 **)(*(int *)(param_1 + 0xc) + 0x1c8) = 0;
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x6c);
  puVar3[0x41] = *(int *)(param_1 + 0xc) + 0x1e0;
  FUN_011b6730(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x70));
  iVar4 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(iVar4 + 0x1c8);
  puVar3[4] = *(undefined4 *)(iVar4 + 0x314);
  puVar3[5] = *(float *)(iVar4 + 0x324) * *(float *)(iVar4 + 0x314);
  puVar3[6] = *(undefined4 *)(iVar4 + 0x318);
  puVar3[9] = *(undefined4 *)(iVar4 + 0x328);
  puVar3[10] = *(float *)(iVar4 + 0x324) * *(float *)(iVar4 + 0x328);
  puVar3[0x14] = *(undefined4 *)(iVar4 + 500);
  uVar15 = *(undefined4 *)(iVar4 + 0x1f8);
  puVar3[0x1d] = uVar5;
  puVar3[0x15] = uVar15;
  puVar3[0xc] = *(float *)(iVar4 + 0x244) * *(float *)(iVar4 + 0x318);
  puVar3[0xd] = *(undefined4 *)(iVar4 + 0x1f8);
  puVar3[0xe] = *(float *)(iVar4 + 0x24c) * *(float *)(iVar4 + 0x318);
  puVar3[7] = *(undefined4 *)(iVar4 + 0x1e8);
  puVar3[8] = *(undefined4 *)(iVar4 + 0x1ec);
  uVar15 = *(undefined4 *)(iVar4 + 0x330);
  puVar3[0x18] = uVar15;
  puVar3[0x19] = uVar15;
  puVar3[0x1a] = uVar15;
  puVar3[0x1b] = uVar15;
  puVar3[0x40] = param_1;
  uVar15 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x70) + 0xc);
  puVar3[0x43] = &DAT_0209e610;
  puVar3[0x42] = uVar15;
  *puVar3 = *(undefined4 *)(param_1 + 0xc);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (0 < iVar4) {
    if (*(char *)(*(int *)(param_1 + 0xc) + 0xac) != '\0') {
      local_18 = TlsGetValue(DAT_01f8fc54);
      puVar3 = *(undefined4 **)((int)local_18 + 4);
      if (puVar3 < *(undefined4 **)((int)local_18 + 0xc)) {
        *puVar3 = "StActions";
        uVar7 = rdtsc();
        local_14 = (undefined4)uVar7;
        puVar3[1] = local_14;
        *(undefined4 **)((int)local_18 + 4) = puVar3 + 3;
      }
      piVar13 = (int *)(*(int *)(param_1 + 0xc) + 0x90);
      *piVar13 = *piVar13 + -1;
      FUN_011bdb70();
      piVar13 = (int *)(*(int *)(param_1 + 0xc) + 0x90);
      *piVar13 = *piVar13 + 1;
    }
    local_6c = 0x30;
    local_6a = 0xffff;
    local_5c = 0;
    local_58 = 0;
    local_70 = 0;
    local_6e = 2;
    local_60 = 0;
    local_54 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x6c);
    local_50 = iVar4;
    FUN_0100c6f0(0,iVar4);
    FUN_0100c6f0(1,iVar4);
    FUN_0100ca60(&local_70,1);
  }
  iVar4 = *(int *)(param_1 + 0xc);
  *(char *)(iVar4 + 0x32f) = *(char *)(iVar4 + 0x32f) + '\x01';
  bVar2 = *(byte *)(iVar4 + 0x32f);
  if ((bVar2 - 4 & 7) == 0) {
    *(byte *)(iVar4 + 0x32d) = *(byte *)(iVar4 + 0x32d) ^ 1;
  }
  if ((bVar2 & 7) == 0) {
    *(byte *)(iVar4 + 0x32d) = *(byte *)(iVar4 + 0x32d) ^ 2;
  }
  if ((bVar2 & 0xf) == 0) {
    *(undefined1 *)(iVar4 + 0x32f) = 0;
    *(char *)(iVar4 + 0x32e) = '\x01' - *(char *)(iVar4 + 0x32e);
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2c);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x38);
  FUN_01192560();
  pvVar12 = TlsGetValue(DAT_01f8fc54);
  puVar3 = *(undefined4 **)((int)pvVar12 + 4);
  if (puVar3 < *(undefined4 **)((int)pvVar12 + 0xc)) {
    *puVar3 = &DAT_017e01a0;
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)((int)pvVar12 + 4) = puVar3 + 3;
  }
  return 0;
}

// 011B32A0  hkpMultiThreadedSimulation::vf20  size=1732  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int __thiscall hkpMultiThreadedSimulation::vf20(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *local_30d0;
  int local_30cc;
  undefined1 local_30c0 [12320];
  float local_a0;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_50;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  
  local_14 = 0x11b32c0;
  local_18 = param_1;
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar3 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar3 = "TtPhysics";
    uVar4 = rdtsc();
    local_14 = (int)uVar4;
    puVar3[1] = local_14;
    *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
  }
  FUN_01192690();
  local_20 = 0;
  if ((param_2 != 0) && (param_3 != (int *)0x0)) {
    local_20 = FUN_0100c010();
    FUN_0100c320(1);
    FUN_0100c020(0x20002);
    (**(code **)(*param_3 + 0xc))(param_2,0x15);
  }
  iVar6 = *(int *)(param_1[3] + 0x2c) - param_1[0x2e];
  if (1 < iVar6) {
    FUN_011b5560(*(int *)(param_1[3] + 0x28) + param_1[0x2e] * 4,0,iVar6 + -1,FUN_011b2b90);
  }
  iVar6 = param_1[0x2e];
  if (iVar6 < *(int *)(param_1[3] + 0x2c)) {
    do {
      *(short *)(*(int *)(*(int *)(param_1[3] + 0x28) + iVar6 * 4) + 0x20) = (short)iVar6;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1[3] + 0x2c));
  }
  FUN_01192560();
  if (param_1[0x25] + param_1[0x1c] != 0) {
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = "LtInterIsland";
      puVar3[3] = "Stduplicates";
      uVar4 = rdtsc();
      local_14 = (int)uVar4;
      puVar3[1] = local_14;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 4;
    }
    FUN_0146d2b0(param_1 + 0x1b,param_1 + 0x24);
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = "StsortPairs";
      uVar4 = rdtsc();
      local_14 = (int)uVar4;
      puVar3[1] = local_14;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
    FUN_011b2bc0(param_1 + 0x1b);
    FUN_011b2bc0(param_1 + 0x24);
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = "StaddAgt";
      uVar4 = rdtsc();
      puVar3[1] = (int)uVar4;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
    local_a0 = 3.40282e+38;
    local_80 = 0;
    local_7c = 0;
    local_30cc = 0;
    local_14 = 0;
    if (0 < param_1[0x1c]) {
      do {
        piVar1 = (int *)(param_1[0x1b] + local_14 * 8);
        iVar6 = *piVar1;
        iVar7 = piVar1[1];
        iVar9 = *(char *)(iVar7 + 5) + iVar7;
        iVar8 = *(char *)(iVar6 + 5) + iVar6;
        iVar7 = *(int *)(*(char *)(*(char *)(iVar7 + 5) + 0x10 + iVar7) + 200 + iVar9);
        local_1c = (int *)(*(char *)(*(char *)(iVar6 + 5) + 0x10 + iVar6) + iVar8);
        iVar6 = *(int *)((int)local_1c + 200);
        if (iVar6 != iVar7) {
          FUN_011c3340(local_18[3],iVar6,iVar7);
          iVar6 = *(int *)((int)local_1c + 200);
        }
        local_1c = *(int **)(local_18[3] + 0x70);
        cVar2 = *(char *)((int)*(char *)(iVar9 + 0x1a) + *local_1c + 0x1e60 +
                         *(char *)(iVar8 + 0x1a) * 10);
        local_30cc = iVar6;
        if (cVar2 != '\0') {
          local_1c[6] = *(int *)(cVar2 * 0x40 + 0x1ee0 + *local_1c);
          iVar6 = FUN_011cf720(iVar8,iVar9,local_1c);
          if (iVar6 != 0) {
            piVar1 = *(int **)(local_18[3] + 0x70);
            local_34 = *(undefined4 *)(iVar6 + 0x10);
            local_1c = *(int **)(iVar6 + 0x14);
            iVar7 = *(char *)(iVar6 + 0xc) * 0x40 + 0x1ed0 + *piVar1;
            piVar1[0x18] = iVar7;
            piVar1[6] = *(int *)(iVar7 + 0x10);
            local_30d0 = local_30c0;
            local_a0 = 3.40282e+38;
            local_50 = 0;
            FUN_0118d840(iVar6,piVar1,&local_30d0,*(undefined4 *)(iVar6 + 8));
            if (local_30d0 != local_30c0) {
              (**(code **)(**(int **)(iVar6 + 8) + 0x18))(local_34,local_1c,piVar1,&local_30d0);
            }
            if (local_a0 != 3.40282e+38) {
              FUN_011b2c20(&local_30d0,iVar6,local_18 + 0x40);
            }
          }
        }
        param_1 = local_18;
      } while ((DAT_0225bcf4 != 1) && (local_14 = local_14 + 1, local_14 < local_18[0x1c]));
    }
    param_1[0x1c] = 0;
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = "StremoveAgt";
      uVar4 = rdtsc();
      local_14 = (int)uVar4;
      puVar3[1] = local_14;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
    iVar6 = 0;
    if (0 < param_1[0x25]) {
      do {
        iVar7 = *(int *)(param_1[0x24] + iVar6 * 8);
        iVar8 = *(int *)(param_1[0x24] + iVar6 * 8 + 4);
        iVar7 = FUN_0118c720(*(char *)(iVar7 + 5) + iVar7,*(char *)(iVar8 + 5) + iVar8);
        if (iVar7 != 0) {
          FUN_011cf950(iVar7);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1[0x25]);
    }
    param_1[0x25] = 0;
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = &DAT_017e01a0;
      uVar4 = rdtsc();
      local_14 = (int)uVar4;
      puVar3[1] = local_14;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_01192610();
  iVar6 = param_1[3];
  param_1[6] = (int)((float)param_1[6] + (float)param_1[7]);
  piVar1 = (int *)(iVar6 + 0x8c);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(iVar6 + 0x94) == '\0')) {
    if (*(int *)(iVar6 + 0x84) != 0) {
      FUN_011925d0();
    }
    if ((*(int *)(iVar6 + 0x9c) == 1) && (*(int *)(iVar6 + 0x88) != 0)) {
      FUN_011925f0();
    }
  }
  local_14 = 0;
  if (DAT_0225bcf4 == 1) {
    local_14 = 2;
    param_1[6] = (int)((float)param_1[6] - (float)param_1[7]);
    FUN_011926a0();
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = &DAT_0164b09c;
      uVar4 = rdtsc();
      local_18 = (int *)uVar4;
      puVar3[1] = local_18;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
  }
  else {
    if (*(int *)(param_1[3] + 0x184) != 0) {
      pvVar5 = TlsGetValue(DAT_01f8fc54);
      puVar3 = *(undefined4 **)((int)pvVar5 + 4);
      if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
        *puVar3 = "TtPostCollideCB";
        uVar4 = rdtsc();
        local_18 = (int *)uVar4;
        puVar3[1] = local_18;
        *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
      }
      local_2c = (float)param_1[6];
      local_30 = local_2c - (float)param_1[7];
      local_28 = local_2c - local_30;
      local_24 = 0.0;
      if (local_28 != 0.0) {
        local_24 = 1.0 / local_28;
      }
      FUN_011cc320(param_1[3],&local_30);
      pvVar5 = TlsGetValue(DAT_01f8fc54);
      puVar3 = *(undefined4 **)((int)pvVar5 + 4);
      if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
        *puVar3 = &DAT_0164b09c;
        uVar4 = rdtsc();
        local_18 = (int *)uVar4;
        puVar3[1] = local_18;
        *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
      }
    }
    FUN_01192560();
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = &DAT_0164b09c;
      uVar4 = rdtsc();
      local_18 = (int *)uVar4;
      puVar3[1] = local_18;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
    if (*(char *)(param_1[3] + 0xe4) != '\0') {
      param_1[0x30] = param_2;
    }
    FUN_011926a0();
    (**(code **)(*param_1 + 0x18))();
    param_1[0x30] = 0;
    if (DAT_0225bcf4 == 1) {
      local_14 = 3;
    }
  }
  if (param_3 != (int *)0x0) {
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = "TtWaitForWorkerThreads";
      uVar4 = rdtsc();
      local_18 = (int *)uVar4;
      puVar3[1] = local_18;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
    FUN_0100c320(0);
    FUN_0100c020(local_20);
    (**(code **)(*param_3 + 0x10))();
    pvVar5 = TlsGetValue(DAT_01f8fc54);
    puVar3 = *(undefined4 **)((int)pvVar5 + 4);
    if (puVar3 < *(undefined4 **)((int)pvVar5 + 0xc)) {
      *puVar3 = &DAT_0164b09c;
      uVar4 = rdtsc();
      local_20 = (undefined4)uVar4;
      puVar3[1] = local_20;
      *(undefined4 **)((int)pvVar5 + 4) = puVar3 + 3;
    }
  }
  param_1[10] = local_14;
  iVar6 = 0;
  if (local_14 != 0) {
    iVar6 = FUN_01193ff0();
    if (iVar6 != 0) {
      FUN_011ceb40(param_1[3]);
    }
    iVar6 = param_1[10];
  }
  return iVar6;
}

// 011B3970  FUN_011b3970  size=221  [run]
int FUN_011b3970(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *unaff_ESI;
  
  uVar1 = unaff_ESI[1];
  iVar2 = 0;
  if (0 < (int)uVar1) {
    piVar4 = (int *)*unaff_ESI;
    do {
      if (param_1 == *piVar4) {
        return *unaff_ESI + iVar2 * 0x1c;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 7;
    } while (iVar2 < (int)uVar1);
  }
  if (uVar1 == (unaff_ESI[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94);
  }
  puVar3 = (undefined4 *)(*unaff_ESI + unaff_ESI[1] * 0x1c);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3 = puVar3 + 3;
    iVar2 = 2;
    do {
      puVar3[-2] = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar3 = (undefined4 *)(*unaff_ESI + unaff_ESI[1] * 0x1c);
  unaff_ESI[1] = unaff_ESI[1] + 1;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[4] = 0;
    puVar3[6] = 0;
  }
  *(int *)(*unaff_ESI + -0x1c + unaff_ESI[1] * 0x1c) = param_1;
  return *unaff_ESI + -0x1c + unaff_ESI[1] * 0x1c;
}

// 011B3A50  FUN_011b3a50  size=501  [run]
void __thiscall
FUN_011b3a50(int param_1,int param_2,int param_3,int *param_4,undefined1 param_5,undefined2 *param_6
            )

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  LPVOID pvVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_8;
  
  piVar3 = param_4;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  puVar5 = *(undefined2 **)((int)pvVar4 + 0xc);
  if ((*(int *)((int)pvVar4 + 8) < 0x100) || (*(undefined2 **)((int)pvVar4 + 0x10) < puVar5 + 0x80))
  {
    puVar5 = (undefined2 *)FUN_0100b780(0x100);
  }
  else {
    *(undefined2 **)((int)pvVar4 + 0xc) = puVar5 + 0x80;
  }
  puVar6 = (undefined2 *)0x0;
  iVar7 = param_4[2] + param_4[1];
  local_8 = 0;
  if (iVar7 != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 0xe8);
    if (puVar5 != (undefined2 *)0x0) {
      iVar2 = param_4[3];
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + 1) = 1;
      puVar5[2] = 0x50;
      puVar5[3] = 0xffff;
      puVar5[8] = 0xffff;
      *(undefined4 *)(puVar5 + 10) = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0;
      *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(param_3 + 0x50);
      uVar1 = *(undefined8 *)(param_3 + 0x58);
      *(int *)(puVar5 + 0x16) = param_2 + iVar2 * 4;
      puVar5[8] = 0;
      puVar5[0x12] = 0;
      *(undefined1 *)(puVar5 + 0x15) = 0;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x1c) = uVar1;
      puVar5[0x13] = (short)iVar7;
      puVar5[0x14] = (short)iVar8;
      *(undefined1 *)((int)puVar5 + 1) = 1;
      *(undefined1 *)(puVar5 + 0x22) = param_5;
      puVar6 = puVar5;
    }
    puVar6[0x12] = 0;
    local_8 = 1;
    puVar6 = (undefined2 *)((iVar7 + -1) / iVar8 + 1);
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0xec);
  iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 0xe8);
  if (iVar8 <= iVar7) {
    iVar8 = iVar7;
  }
  iVar7 = FUN_011e66b0(puVar6,iVar8);
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(undefined4 *)(iVar7 + 0x10) = 0;
  if (local_8 != 0) {
    piVar9 = (int *)(puVar5 + 10);
    param_4 = (int *)local_8;
    do {
      piVar9[3] = iVar7;
      *piVar9 = *piVar3;
      *(undefined2 *)(piVar9 + -1) = *(undefined2 *)(*piVar3 + 0x20);
      piVar9[2] = *(int *)(*(int *)(param_1 + 0xc) + 0x6c);
      FUN_0100ca60(piVar9 + -5,1);
      piVar9 = piVar9 + 0x14;
      param_4 = (int *)((int)param_4 + -1);
    } while (param_4 != (int *)0x0);
  }
  if (param_6 != (undefined2 *)0x0) {
    *param_6 = 0xe;
    *(undefined1 *)(param_6 + 1) = 2;
    param_6[3] = 0xffff;
    param_6[2] = 0x30;
    param_6[8] = puVar5[8];
    *(undefined4 *)(param_6 + 10) = *(undefined4 *)(puVar5 + 10);
    *(undefined4 *)(param_6 + 0xc) = *(undefined4 *)(puVar5 + 0xc);
    *(undefined4 *)(param_6 + 0xe) = *(undefined4 *)(puVar5 + 0xe);
    param_6[8] = puVar5[8];
    *(undefined4 *)(param_6 + 0x10) = *(undefined4 *)(puVar5 + 0x10);
  }
  *(undefined4 *)(param_6 + 10) = *(undefined4 *)(puVar5 + 10);
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  if (((0xff < *(int *)((int)pvVar4 + 8)) && (puVar5 + 0x80 == *(undefined2 **)((int)pvVar4 + 0xc)))
     && (*(undefined2 **)((int)pvVar4 + 0x14) != puVar5)) {
    *(undefined2 **)((int)pvVar4 + 0xc) = puVar5;
    return;
  }
  FUN_0100b9b0(puVar5,0x100);
  return;
}

// 011B3C50  FUN_011b3c50  size=666  [run]
void __thiscall
FUN_011b3c50(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 param_6)

{
  LPVOID pvVar1;
  uint uVar2;
  undefined1 local_160 [20];
  undefined4 local_14c;
  int local_130 [4];
  undefined4 local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_100;
  undefined4 local_fc;
  float local_f8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_bc;
  undefined4 local_a8;
  int local_4c;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_18;
  int local_14;
  
  local_18 = *param_5;
  if ((*(int *)(param_1 + 0xc0) == 0) || (param_3 <= *(int *)(*(int *)(param_1 + 0xc) + 0xf0))) {
    FUN_011b7b70(param_2,param_3,param_4,local_18,param_6);
    return;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  local_14 = *(int *)((int)pvVar1 + 0xc);
  uVar2 = param_3 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar1 + 8) < (int)uVar2) || (*(uint *)((int)pvVar1 + 0x10) < local_14 + uVar2)
     ) {
    local_14 = FUN_0100b780(uVar2);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = local_14 + uVar2;
  }
  FUN_011b3a50(param_2,param_4,param_5,param_6,local_160);
  FUN_0100d100(1);
  local_a8 = 0;
  local_4c = 0;
  local_2c = *(int *)(param_1 + 0xc) + 0x1e0;
  local_14c = local_18;
  FUN_011b6730(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x70));
  local_130[0] = *(int *)(param_1 + 0xc);
  local_120 = *(undefined4 *)(local_130[0] + 0x314);
  local_bc = *(undefined4 *)(local_130[0] + 0x1c8);
  local_11c = *(float *)(local_130[0] + 0x314) * *(float *)(local_130[0] + 0x324);
  local_118 = *(undefined4 *)(local_130[0] + 0x318);
  local_10c = *(undefined4 *)(local_130[0] + 0x328);
  local_108 = *(float *)(local_130[0] + 0x324) * *(float *)(local_130[0] + 0x328);
  local_e0 = *(undefined4 *)(local_130[0] + 500);
  local_dc = *(undefined4 *)(local_130[0] + 0x1f8);
  local_100 = *(float *)(local_130[0] + 0x244) * *(float *)(local_130[0] + 0x318);
  local_fc = *(undefined4 *)(local_130[0] + 0x1f8);
  local_f8 = *(float *)(local_130[0] + 0x24c) * *(float *)(local_130[0] + 0x318);
  local_114 = *(undefined4 *)(local_130[0] + 0x1e8);
  local_110 = *(undefined4 *)(local_130[0] + 0x1ec);
  local_d0 = *(undefined4 *)(local_130[0] + 0x330);
  local_28 = *(undefined4 *)(*(int *)(local_130[0] + 0x70) + 0xc);
  local_24 = &DAT_0209e610;
  uStack_cc = local_d0;
  uStack_c8 = local_d0;
  uStack_c4 = local_d0;
  local_30 = param_1;
  FUN_011e10b0(local_130,0,local_160);
  if (local_4c != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(local_4c,0x200);
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) &&
      (uVar2 + local_14 == *(int *)((int)pvVar1 + 0xc))) &&
     (*(int *)((int)pvVar1 + 0x14) != local_14)) {
    *(int *)((int)pvVar1 + 0xc) = local_14;
    return;
  }
  FUN_0100b9b0(local_14,uVar2);
  return;
}

// 011B3EF0  FUN_011b3ef0  size=813  [run]
void __thiscall
FUN_011b3ef0(int param_1,int param_2,int param_3,int *param_4,int param_5,undefined4 param_6,
            undefined4 param_7)

{
  int *piVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  int local_140 [4];
  undefined4 local_130;
  float local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  float local_110;
  undefined4 local_10c;
  float local_108;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_cc;
  undefined4 local_b8;
  int local_5c;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  if ((*(int *)(param_1 + 0xc0) == 0) || (param_3 <= *(int *)(*(int *)(param_1 + 0xc) + 0xf0))) {
    if (0 < param_5) {
      param_4 = param_4 + 1;
      local_1c = (int *)param_5;
      do {
        FUN_011b7b70(param_2 + param_4[2] * 4,param_4[1] + *param_4,param_6,param_4[-1],param_7);
        param_4 = param_4 + 7;
        local_1c = (int *)((int)local_1c + -1);
      } while (local_1c != (int *)0x0);
    }
    return;
  }
  local_1c = (int *)0x0;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  local_20 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_5 * 0x30 + 0x7fU & 0xffffff80;
  local_24 = uVar4;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (*(uint *)((int)pvVar2 + 0x10) < local_20 + uVar4)
     ) {
    local_20 = FUN_0100b780(uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = local_20 + uVar4;
  }
  if (0 < param_5) {
    local_14 = local_20;
    local_18 = param_5;
    do {
      piVar1 = param_4;
      if (*param_4 != *(int *)(*(int *)(param_1 + 0xc) + 0x20)) {
        FUN_011b3a50(param_2,param_6,param_4,param_7,local_14);
        piVar1 = local_1c;
      }
      local_1c = piVar1;
      local_14 = local_14 + 0x30;
      param_4 = param_4 + 7;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_18 = 0;
    uVar4 = local_24;
  }
  FUN_0100d100(1);
  local_b8 = 0;
  local_5c = 0;
  local_3c = *(int *)(param_1 + 0xc) + 0x1e0;
  FUN_011b6730(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x70));
  local_140[0] = *(int *)(param_1 + 0xc);
  local_130 = *(undefined4 *)(local_140[0] + 0x314);
  local_cc = *(undefined4 *)(local_140[0] + 0x1c8);
  local_12c = *(float *)(local_140[0] + 0x324) * *(float *)(local_140[0] + 0x314);
  local_128 = *(undefined4 *)(local_140[0] + 0x318);
  local_11c = *(undefined4 *)(local_140[0] + 0x328);
  local_118 = *(float *)(local_140[0] + 0x324) * *(float *)(local_140[0] + 0x328);
  local_f0 = *(undefined4 *)(local_140[0] + 500);
  local_ec = *(undefined4 *)(local_140[0] + 0x1f8);
  local_110 = *(float *)(local_140[0] + 0x244) * *(float *)(local_140[0] + 0x318);
  local_10c = *(undefined4 *)(local_140[0] + 0x1f8);
  local_108 = *(float *)(local_140[0] + 0x24c) * *(float *)(local_140[0] + 0x318);
  local_124 = *(undefined4 *)(local_140[0] + 0x1e8);
  local_120 = *(undefined4 *)(local_140[0] + 0x1ec);
  local_e0 = *(undefined4 *)(local_140[0] + 0x330);
  local_38 = *(undefined4 *)(*(int *)(local_140[0] + 0x70) + 0xc);
  local_34 = &DAT_0209e610;
  uStack_dc = local_e0;
  uStack_d8 = local_e0;
  uStack_d4 = local_e0;
  local_40 = param_1;
  if (0 < param_5) {
    local_14 = local_20;
    local_18 = param_5;
    do {
      FUN_011e10b0(local_140,0,local_14);
      local_14 = local_14 + 0x30;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (local_5c != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(local_5c,0x200);
  }
  if (local_1c != (int *)0x0) {
    FUN_011b7b70(param_2 + local_1c[3] * 4,local_1c[2] + local_1c[1],param_6,*local_1c,param_7);
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = uVar4 + 0xf & 0xfffffff0;
  if ((((int)uVar4 <= *(int *)((int)pvVar2 + 8)) &&
      (uVar3 + local_20 == *(int *)((int)pvVar2 + 0xc))) &&
     (*(int *)((int)pvVar2 + 0x14) != local_20)) {
    *(int *)((int)pvVar2 + 0xc) = local_20;
    return;
  }
  FUN_0100b9b0(local_20,uVar3);
  return;
}

// 011B4220  hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::vf04  size=209  [run]
void __thiscall
hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::vf04(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = (int)*(char *)(*param_2 + 5) + *param_2;
  iVar5 = (int)*(char *)(param_2[1] + 5) + param_2[1];
  if ((((*(char *)(iVar3 + 0x68) != '\0') &&
       (*(char *)(*(char *)(iVar4 + 0x10) + 0xe8 + iVar4) != '\x05')) &&
      (*(char *)(*(char *)(iVar5 + 0x10) + 0xe8 + iVar5) != '\x05')) &&
     (*(int *)(*(char *)(iVar4 + 0x10) + 200 + iVar4) !=
      *(int *)(*(char *)(iVar5 + 0x10) + 200 + iVar5))) {
    if (*(uint *)(iVar3 + 0x70) == (*(uint *)(iVar3 + 0x74) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar3 + 0x6c),8);
    }
    piVar1 = (int *)(*(int *)(iVar3 + 0x6c) + *(int *)(iVar3 + 0x70) * 8);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *param_2;
      piVar1[1] = param_2[1];
    }
    *(int *)(iVar3 + 0x70) = *(int *)(iVar3 + 0x70) + 1;
    return;
  }
  piVar1 = *(int **)(*(int *)(iVar3 + 0xc) + 0x70);
  cVar2 = *(char *)((int)*(char *)(iVar5 + 0x1a) + *piVar1 + 0x1e60 + *(char *)(iVar4 + 0x1a) * 10);
  if (cVar2 != '\0') {
    piVar1[6] = *(int *)(cVar2 * 0x40 + 0x1ee0 + *piVar1);
    FUN_011cf720(iVar4,iVar5,piVar1);
  }
  return;
}

// 011B4300  hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::vf08  size=179  [run]
void __thiscall
hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::vf08(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = (int)*(char *)(*param_2 + 5) + *param_2;
  iVar4 = (int)*(char *)(param_2[1] + 5) + param_2[1];
  if ((((*(char *)(iVar3 + 0x68) != '\0') &&
       (*(char *)(*(char *)(iVar2 + 0x10) + 0xe8 + iVar2) != '\x05')) &&
      (*(char *)(*(char *)(iVar4 + 0x10) + 0xe8 + iVar4) != '\x05')) &&
     (*(int *)(*(char *)(iVar2 + 0x10) + 200 + iVar2) !=
      *(int *)(*(char *)(iVar4 + 0x10) + 200 + iVar4))) {
    if (*(uint *)(iVar3 + 0x94) == (*(uint *)(iVar3 + 0x98) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(iVar3 + 0x90),8);
    }
    piVar1 = (int *)(*(int *)(iVar3 + 0x90) + *(int *)(iVar3 + 0x94) * 8);
    if (piVar1 != (int *)0x0) {
      *piVar1 = *param_2;
      piVar1[1] = param_2[1];
    }
    *(int *)(iVar3 + 0x94) = *(int *)(iVar3 + 0x94) + 1;
    return;
  }
  iVar3 = FUN_0118c720(iVar2,iVar4);
  if (iVar3 != 0) {
    FUN_011cf8a0(iVar3);
  }
  return;
}

// 011B43C0  hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::MtEntityEntityBroadPhaseListener  size=280  [run]
undefined4 * __thiscall
hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::MtEntityEntityBroadPhaseListener
          (undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  hkpContinuousSimulation::hkpContinuousSimulation(param_2);
  *param_1 = hkpMultiThreadedSimulation::vftable;
  param_1[0x14] = vftable;
  param_1[0x15] = 0;
  param_1[0x16] = MtPhantomBroadPhaseListener::vftable;
  param_1[0x17] = 0;
  puVar1 = param_1 + 0x18;
  *puVar1 = MtBroadPhaseBorderListener::vftable;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x80000000;
  FUN_01015ac0(4000);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0x80000000;
  FUN_01015ac0(4000);
  FUN_01192390();
  FUN_01015ac0(4000);
  FUN_01015ac0(4000);
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_01159f80(10000);
  param_1[0x15] = param_1;
  param_1[0x17] = param_1 + 0x50;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x24) = param_1 + 0x14;
  puVar2 = param_1 + 0x16;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x44) = puVar2;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x28) = puVar2;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x48) = puVar2;
  param_1[0x19] = param_1 + 0x50;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x2c) = puVar1;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 100) = puVar1;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x4c) = puVar1;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x68) = puVar1;
  *(undefined4 **)(*(int *)(param_2 + 0x5c) + 0x6c) = puVar1;
  return param_1;
}

// 011B44E0  hkpBroadPhaseListener::hkpBroadPhaseListener_2  size=194  [run]
void __fastcall hkpBroadPhaseListener::hkpBroadPhaseListener_2(undefined4 *param_1)

{
  *param_1 = hkpMultiThreadedSimulation::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x27));
  param_1[0x25] = 0;
  if (-1 < (int)param_1[0x26]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x24],param_1[0x26] * 8);
  }
  param_1[0x24] = 0;
  param_1[0x26] = 0x80000000;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e));
  param_1[0x1c] = 0;
  if (-1 < (int)param_1[0x1d]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1b],param_1[0x1d] * 8);
  }
  param_1[0x1b] = 0;
  param_1[0x1d] = 0x80000000;
  param_1[0x18] = vftable;
  param_1[0x16] = vftable;
  param_1[0x14] = vftable;
  hkpContinuousSimulation::~hkpContinuousSimulation();
  return;
}

// 011B45B0  FUN_011b45b0  size=78  [run]
void FUN_011b45b0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  DAT_01b24150 = 1;
  if (DAT_01b24151 == '\0') {
    FUN_01446db0();
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x180);
  *(undefined2 *)(iVar2 + 4) = 0x180;
  hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::MtEntityEntityBroadPhaseListener
            (param_1);
  return;
}

// 011B4600  FUN_011b4600  size=31  [run]
void FUN_011b4600(void)

{
  FUN_01446db0();
  DAT_020a07e4 = FUN_011b8340;
  DAT_020a07e8 = FUN_011b45b0;
  return;
}

// 011B4620  hkpMultiThreadedSimulation::vf4C  size=889  [run]
void __thiscall
hkpMultiThreadedSimulation::vf4C(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int local_64 [9];
  uint local_40;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = param_1;
  if (*(int *)(param_1 + 0xc0) == 0) {
    hkpContinuousSimulation::vf4C(param_2,param_3,param_4,param_1 + 0x3c);
    return;
  }
  local_8 = *(int *)(*param_2 + 200);
  uVar8 = *(uint *)(local_8 + 0x50);
  local_14 = uVar8;
  if (uVar8 == 0) {
    local_64[7] = 0;
  }
  else {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    local_64[7] = *(int *)((int)pvVar4 + 0xc);
    uVar7 = uVar8 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar4 + 8) < (int)uVar7) ||
       (*(uint *)((int)pvVar4 + 0x10) < local_64[7] + uVar7)) {
      local_64[7] = FUN_0100b780(uVar7);
    }
    else {
      *(uint *)((int)pvVar4 + 0xc) = local_64[7] + uVar7;
    }
  }
  iVar2 = local_8;
  local_40 = uVar8 | 0x80000000;
  FUN_01015ea0(local_64[7],0,uVar8);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  local_24 = 1000;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  local_28 = *(int *)((int)pvVar4 + 0xc);
  if ((*(int *)((int)pvVar4 + 8) < 0x1000) || (*(uint *)((int)pvVar4 + 0x10) < local_28 + 0x1000U))
  {
    local_28 = FUN_0100b780(0x1000);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_28 + 0x1000U;
  }
  local_2c = 0x800003e8;
  local_20 = 0;
  local_1c = 0;
  local_18 = -0x80000000;
  local_64[1] = 0;
  local_64[3] = 0;
  local_64[5] = 0;
  local_64[2] = 0;
  local_64[4] = 0;
  local_64[6] = 0;
  local_c = 0;
  local_64[0] = iVar2;
  local_34 = local_28;
  if (0 < param_3) {
    do {
      iVar5 = local_c;
      iVar9 = 0;
      iVar2 = param_2[local_c];
      *(undefined1 *)((uint)*(ushort *)(iVar2 + 0xa4) + local_64[7]) = 1;
      FUN_0146d8e0(&local_20);
      if (0 < local_1c) {
        do {
          iVar5 = *(int *)(local_20 + 4 + iVar9 * 8);
          piVar1 = (int *)(local_20 + iVar9 * 8);
          iVar5 = *(char *)(iVar5 + 0x10) + iVar5;
          if ((*(int *)(iVar5 + 200) != local_8) ||
             (*(char *)((uint)*(ushort *)(iVar5 + 0xa4) + local_64[7]) == '\0')) {
            iVar5 = *piVar1;
            iVar3 = *(int *)(*(int *)(local_10 + 0xc) + 0x78);
            iVar6 = *(char *)(iVar5 + 0xc) * 0x40;
            if ((*(int *)(iVar6 + 0x1ee0 + iVar3) == 0) ||
               (*(char *)(iVar6 + 0x1ee4 + iVar3) != '\0')) {
              iVar5 = FUN_01010160(*(undefined4 *)(iVar2 + 0xd0),0);
              if (iVar5 == 0) {
                FUN_01006000();
                FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(iVar2 + 0xd0),iVar2);
              }
            }
            else {
              local_64[*(byte *)(iVar5 + 0xe)] = local_64[*(byte *)(iVar5 + 0xe)] + 1;
              if (local_30 == (local_2c & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_34,4);
              }
              *(int *)(local_34 + local_30 * 4) = *piVar1;
              local_30 = local_30 + 1;
            }
          }
          iVar9 = iVar9 + 1;
          iVar5 = local_c;
        } while (iVar9 < local_1c);
      }
      local_c = iVar5 + 1;
    } while (local_c < param_3);
  }
  if (local_30 != 0) {
    FUN_011b3c50(local_34,local_30,param_4,local_64,0);
  }
  local_1c = 0;
  if (-1 < local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 * 8);
  }
  iVar5 = local_24;
  iVar2 = local_28;
  local_20 = 0;
  local_18 = 0x80000000;
  if (local_28 == local_34) {
    local_30 = 0;
  }
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  uVar8 = iVar5 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar8) || (uVar8 + iVar2 != *(int *)((int)pvVar4 + 0xc)))
     || (*(int *)((int)pvVar4 + 0x14) == iVar2)) {
    FUN_0100b9b0(iVar2,uVar8);
  }
  else {
    *(int *)((int)pvVar4 + 0xc) = iVar2;
  }
  local_30 = 0;
  if (-1 < (int)local_2c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c * 4);
  }
  local_34 = 0;
  local_2c = 0x80000000;
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = local_64[7];
  uVar8 = local_14 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar8) ||
      (uVar8 + local_64[7] != *(int *)((int)pvVar4 + 0xc))) ||
     (*(int *)((int)pvVar4 + 0x14) == local_64[7])) {
    FUN_0100b9b0(local_64[7],uVar8);
  }
  else {
    *(int *)((int)pvVar4 + 0xc) = local_64[7];
  }
  if (-1 < (int)local_40) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(iVar2,local_40 & 0x3fffffff);
  }
  return;
}

// 011B49B0  hkpMultiThreadedSimulation::vf50  size=1585  [run]
void __thiscall hkpMultiThreadedSimulation::vf50(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = param_1;
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "LtPhysics";
    puVar1[3] = "StRecollide PSI";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 4;
  }
  piVar7 = (int *)(*(int *)(param_1 + 0xc) + 0x8c);
  *piVar7 = *piVar7 + 1;
  iVar8 = param_3[2];
  local_30 = 0x80000000;
  local_24 = 0x80000000;
  local_14 = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = (int *)0x0;
  local_28 = 0;
  local_c = 0;
  if (-1 < iVar8) {
    piVar7 = (int *)*param_3;
    do {
      if (*piVar7 != -1) break;
      local_14 = local_14 + 1;
      piVar7 = piVar7 + 2;
    } while (local_14 <= iVar8);
  }
  if (local_14 <= iVar8) {
    do {
      uVar5 = *(uint *)(*param_3 + 4 + local_14 * 8);
      local_44 = 0;
      local_40 = 0;
      local_3c = -0x80000000;
      local_1c = uVar5;
      FUN_0146d8e0(&local_44);
      local_20 = local_40;
      local_10 = 0;
      if (0 < local_40) {
        do {
          iVar8 = *(int *)(local_44 + local_10 * 8);
          iVar4 = FUN_01010160(iVar8,0);
          if (iVar4 == 0) {
            iVar4 = *(char *)(iVar8 + 0xc) * 0x40 + *(int *)(*(int *)(local_18 + 0xc) + 0x78);
            if ((*(int *)(iVar4 + 0x1ee0) == 0) ||
               ((*(char *)(iVar4 + 0x1ee4) != '\0' &&
                (*(float *)(uVar5 + 0x14c) == (float)(undefined *)0x0)))) {
              local_8 = *(int *)(uVar5 + 200);
              if (*(char *)(uVar5 + 0xe8) == '\x05') {
                local_8 = *(int *)(((int)*(char *)(*(int *)(iVar8 + 0x14) + 0x10) +
                                    *(int *)(iVar8 + 0x14) ^
                                    (int)*(char *)(*(int *)(iVar8 + 0x10) + 0x10) +
                                    *(int *)(iVar8 + 0x10) ^ uVar5) + 200);
              }
              FUN_010100a0(&PTR_vftable_018e9b94,iVar8,1);
              if (local_34 == (local_30 & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_38,0xc);
              }
              uVar5 = local_34 + 1;
              piVar7 = (int *)(local_38 + local_34 * 0xc);
              *piVar7 = iVar8;
              piVar7[1] = local_8;
              piVar7[2] = *(byte *)(iVar8 + 0xe) - 1;
              iVar8 = 0;
              piVar6 = local_2c;
              local_34 = uVar5;
              if (0 < (int)local_28) {
                do {
                  if (local_8 == *piVar6) {
                    piVar6 = local_2c + iVar8 * 7;
                    goto LAB_011b4c4b;
                  }
                  iVar8 = iVar8 + 1;
                  piVar6 = piVar6 + 7;
                } while (iVar8 < (int)local_28);
              }
              if (local_28 == (local_24 & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,0x1c);
              }
              piVar6 = local_2c + local_28 * 7;
              if (piVar6 != (int *)0x0) {
                *piVar6 = 0;
                piVar6 = piVar6 + 3;
                iVar8 = 2;
                do {
                  piVar6[-2] = 0;
                  *piVar6 = 0;
                  piVar6[2] = 0;
                  piVar6 = piVar6 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              piVar6 = local_2c + local_28 * 7;
              local_28 = local_28 + 1;
              if (piVar6 != (int *)0x0) {
                *piVar6 = 0;
                piVar6 = piVar6 + 3;
                iVar8 = 2;
                do {
                  piVar6[-2] = 0;
                  *piVar6 = 0;
                  piVar6[2] = 0;
                  piVar6 = piVar6 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              local_2c[local_28 * 7 + -7] = local_8;
              piVar6 = local_2c + local_28 * 7 + -7;
LAB_011b4c4b:
              piVar6[piVar7[2] + 1] = piVar6[piVar7[2] + 1] + 1;
              local_c = local_c + 1;
              uVar5 = local_1c;
            }
          }
          local_10 = local_10 + 1;
        } while (local_10 < local_20);
      }
      FUN_010060a0();
      iVar8 = local_14 + 1;
      if (iVar8 <= param_3[2]) {
        piVar7 = (int *)(*param_3 + iVar8 * 8);
        do {
          if (*piVar7 != -1) break;
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 2;
        } while (iVar8 <= param_3[2]);
      }
      local_40 = 0;
      local_14 = iVar8;
      if (-1 < local_3c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_44,local_3c * 8);
      }
      local_44 = 0;
      local_3c = 0x80000000;
    } while (iVar8 <= param_3[2]);
  }
  FUN_010102e0();
  iVar8 = 0;
  iVar4 = 0;
  if (0 < (int)local_28) {
    iVar10 = 0;
    do {
      *(int *)((int)local_2c + iVar10 + 0xc) = iVar8;
      *(int *)((int)local_2c + iVar10 + 0x14) = iVar8;
      iVar8 = iVar8 + *(int *)((int)local_2c + iVar10 + 4);
      iVar4 = iVar4 + 1;
      *(int *)((int)local_2c + iVar10 + 0x10) = iVar8;
      *(int *)((int)local_2c + iVar10 + 0x18) = iVar8;
      iVar8 = iVar8 + *(int *)((int)local_2c + iVar10 + 8);
      iVar10 = iVar10 + 0x1c;
    } while (iVar4 < (int)local_28);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  param_3 = *(int **)((int)pvVar3 + 0xc);
  uVar5 = local_c * 4 + 0x7fU & 0xffffff80;
  local_8 = uVar5;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar5) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)param_3 + uVar5)) {
    param_3 = (int *)FUN_0100b780(uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)param_3 + uVar5;
  }
  local_10 = 0;
  if (0 < (int)local_34) {
    iVar8 = 0;
    do {
      local_1c = *(uint *)(iVar8 + local_38);
      local_14 = *(int *)(iVar8 + 4 + local_38);
      local_20 = *(int *)(iVar8 + 8 + local_38);
      iVar4 = 0;
      piVar7 = local_2c;
      if (0 < (int)local_28) {
        do {
          if (local_14 == *piVar7) {
            piVar7 = local_2c + iVar4 * 7;
            goto LAB_011b4e5b;
          }
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 7;
        } while (iVar4 < (int)local_28);
      }
      if (local_28 == (local_24 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,0x1c);
      }
      piVar7 = local_2c + local_28 * 7;
      if (piVar7 != (int *)0x0) {
        *piVar7 = 0;
        piVar7 = piVar7 + 3;
        iVar4 = 2;
        do {
          piVar7[-2] = 0;
          *piVar7 = 0;
          piVar7[2] = 0;
          piVar7 = piVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      piVar7 = local_2c + local_28 * 7;
      local_28 = local_28 + 1;
      if (piVar7 != (int *)0x0) {
        *piVar7 = 0;
        piVar7 = piVar7 + 3;
        iVar4 = 2;
        do {
          piVar7[-2] = 0;
          *piVar7 = 0;
          piVar7[2] = 0;
          piVar7 = piVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_2c[local_28 * 7 + -7] = local_14;
      piVar7 = local_2c + local_28 * 7 + -7;
LAB_011b4e5b:
      iVar4 = piVar7[local_20 + 5];
      piVar7[local_20 + 5] = iVar4 + 1;
      *(uint *)((int)param_3 + iVar4 * 4) = local_1c;
      local_10 = local_10 + 1;
      iVar8 = iVar8 + 0xc;
      uVar5 = local_8;
    } while (local_10 < (int)local_34);
  }
  iVar8 = local_18;
  FUN_011b3ef0(param_3,local_c,local_2c,local_28,*(undefined4 *)(*(int *)(local_18 + 0xc) + 0x70),1)
  ;
  iVar8 = *(int *)(iVar8 + 0xc);
  piVar7 = (int *)(iVar8 + 0x8c);
  *piVar7 = *piVar7 + -1;
  if ((*piVar7 == 0) && (*(char *)(iVar8 + 0x94) == '\0')) {
    if (*(int *)(iVar8 + 0x84) != 0) {
      FUN_011925d0();
    }
    if ((*(int *)(iVar8 + 0x9c) == 1) && (*(int *)(iVar8 + 0x88) != 0)) {
      FUN_011925f0();
    }
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_017e01a0;
    uVar2 = rdtsc();
    local_18 = (int)uVar2;
    puVar1[1] = local_18;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar9 = uVar5 + 0xf & 0xfffffff0;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) ||
      (uVar9 + (int)param_3 != *(int *)((int)pvVar3 + 0xc))) ||
     ((int *)*(int *)((int)pvVar3 + 0x14) == param_3)) {
    FUN_0100b9b0(param_3,uVar9);
  }
  else {
    *(int **)((int)pvVar3 + 0xc) = param_3;
  }
  local_28 = 0;
  if ((local_24 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (local_2c,(local_24 * 8 - (local_24 & 0x3fffffff)) * 4);
  }
  local_2c = (int *)0x0;
  local_24 = 0x80000000;
  local_34 = 0;
  if ((local_30 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,(local_30 & 0x3fffffff) * 0xc);
  }
  local_38 = 0;
  local_30 = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 011B4FF0  FUN_011b4ff0  size=8  [run]
undefined4 FUN_011b4ff0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011B5030  FUN_011b5030  size=12  [run]
void __thiscall FUN_011b5030(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B5050  FUN_011b5050  size=12  [run]
void __thiscall FUN_011b5050(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B5060  FUN_011b5060  size=12  [run]
void __thiscall FUN_011b5060(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B5070  FUN_011b5070  size=9  [run]
void FUN_011b5070(void)

{
  FUN_01010160();
  return;
}

// 011B5090  FUN_011b5090  size=8  [run]
undefined4 FUN_011b5090(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011B50B0  FUN_011b50b0  size=12  [run]
void __thiscall FUN_011b50b0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B50C0  FUN_011b50c0  size=12  [run]
void __thiscall FUN_011b50c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B50D0  FUN_011b50d0  size=12  [run]
void __thiscall FUN_011b50d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B50E0  FUN_011b50e0  size=9  [run]
void FUN_011b50e0(void)

{
  FUN_01010160();
  return;
}

// 011B50F0  FUN_011b50f0  size=20  [run]
void __thiscall FUN_011b50f0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 011B5110  FUN_011b5110  size=20  [run]
void __thiscall FUN_011b5110(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 011B5180  FUN_011b5180  size=9  [run]
void __fastcall FUN_011b5180(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 011B51C0  FUN_011b51c0  size=15  [run]
int __thiscall FUN_011b51c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 011B5200  FUN_011b5200  size=21  [run]
void FUN_011b5200(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 011B5290  FUN_011b5290  size=24  [run]
int __thiscall FUN_011b5290(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x1c;
}

// 011B5320  FUN_011b5320  size=18  [run]
int __thiscall FUN_011b5320(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 011B5350  FUN_011b5350  size=14  [run]
uint FUN_011b5350(uint param_1,uint param_2,uint param_3)

{
  return param_1 ^ param_2 ^ param_3;
}

// 011B5360  FUN_011b5360  size=12  [run]
void __thiscall FUN_011b5360(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B5390  FUN_011b5390  size=12  [run]
void __thiscall FUN_011b5390(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B53C0  FUN_011b53c0  size=12  [run]
void __thiscall FUN_011b53c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 011B5450  FUN_011b5450  size=265  [run]
void FUN_011b5450(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  int local_18;
  int local_14;
  
  do {
    local_14 = param_2;
    iVar4 = param_2 + param_3 >> 1;
    local_30 = *(undefined4 *)(param_1 + iVar4 * 8);
    local_2c = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar4 = param_3;
    do {
      cVar3 = (*param_4)(param_1 + local_14 * 8,&local_30);
      if (cVar3 != '\0') {
        local_18 = param_1 + local_14 * 8;
        do {
          local_14 = local_14 + 1;
          local_18 = local_18 + 8;
          cVar3 = (*param_4)(local_18,&local_30);
        } while (cVar3 != '\0');
      }
      cVar3 = (*param_4)(&local_30,param_1 + iVar4 * 8);
      if (cVar3 != '\0') {
        local_18 = param_1 + iVar4 * 8;
        do {
          local_18 = local_18 + -8;
          iVar4 = iVar4 + -1;
          cVar3 = (*param_4)(&local_30,local_18);
        } while (cVar3 != '\0');
      }
      if (iVar4 < local_14) break;
      if (iVar4 != local_14) {
        uVar1 = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
        uVar2 = *(undefined4 *)(param_1 + iVar4 * 8);
        *(undefined4 *)(param_1 + iVar4 * 8) = *(undefined4 *)(param_1 + local_14 * 8);
        *(undefined4 *)(param_1 + 4 + iVar4 * 8) = *(undefined4 *)(param_1 + 4 + local_14 * 8);
        *(undefined4 *)(param_1 + local_14 * 8) = uVar2;
        *(undefined4 *)(param_1 + 4 + local_14 * 8) = uVar1;
      }
      local_14 = local_14 + 1;
      iVar4 = iVar4 + -1;
    } while (local_14 <= iVar4);
    if (param_2 < iVar4) {
      FUN_011b5450(param_1,param_2,iVar4,param_4);
    }
    param_2 = local_14;
    if (param_3 <= local_14) {
      return;
    }
  } while( true );
}

// 011B5560  FUN_011b5560  size=239  [run]
void FUN_011b5560(int param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    local_18 = param_2;
    uVar3 = *(undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar6 = param_3;
    do {
      pcVar5 = (char *)(*param_4)(&local_11,*(undefined4 *)(param_1 + local_18 * 4),uVar3);
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        local_18 = local_18 + 1;
        pcVar5 = (char *)(*param_4)(&local_11,*(undefined4 *)(param_1 + local_18 * 4),uVar3);
        cVar2 = *pcVar5;
      }
      pcVar5 = (char *)(*param_4)(&local_12,uVar3,*(undefined4 *)(param_1 + iVar6 * 4));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
        pcVar5 = (char *)(*param_4)(&local_12,uVar3,*(undefined4 *)(param_1 + -4 + iVar1));
        cVar2 = *pcVar5;
      }
      if (iVar6 < local_18) break;
      if (iVar6 != local_18) {
        uVar4 = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = *(undefined4 *)(param_1 + local_18 * 4);
        *(undefined4 *)(param_1 + local_18 * 4) = uVar4;
      }
      local_18 = local_18 + 1;
      iVar6 = iVar6 + -1;
    } while (local_18 <= iVar6);
    if (param_2 < iVar6) {
      FUN_011b5560(param_1,param_2,iVar6,param_4);
    }
    param_2 = local_18;
    if (param_3 <= local_18) {
      return;
    }
  } while( true );
}

// 011B5660  FUN_011b5660  size=57  [run]
void FUN_011b5660(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        puVar1 = param_1 + 3;
        iVar2 = 2;
        do {
          puVar1[-2] = 0;
          *puVar1 = 0;
          puVar1[2] = 0;
          puVar1 = puVar1 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      param_1 = param_1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 011B56C0  FUN_011b56c0  size=28  [run]
void __thiscall FUN_011b56c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 011B56E0  FUN_011b56e0  size=11  [run]
int FUN_011b56e0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 011B56F0  FUN_011b56f0  size=37  [run]
void __thiscall FUN_011b56f0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x1c);
  return;
}

// 011B5720  FUN_011b5720  size=29  [run]
void __thiscall FUN_011b5720(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 011B5760  FUN_011b5760  size=43  [run]
void __thiscall FUN_011b5760(int param_1,undefined1 *param_2)

{
  if (*(float *)(param_1 + 0x3030) != 3.40282e+38) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 011B5790  FUN_011b5790  size=14  [run]
int FUN_011b5790(int param_1)

{
  return *(char *)(param_1 + 0x10) + param_1;
}

// 011B57A0  FUN_011b57a0  size=171  [run]
void __thiscall FUN_011b57a0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 0x124);
  param_1[1] = *(float *)(param_2 + 0x134) * *(float *)(param_2 + 0x124);
  param_1[2] = *(undefined4 *)(param_2 + 0x128);
  param_1[5] = *(undefined4 *)(param_2 + 0x138);
  param_1[6] = *(float *)(param_2 + 0x138) * *(float *)(param_2 + 0x134);
  param_1[0x10] = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_1[0x19] = param_4;
  param_1[0x11] = uVar1;
  param_1[8] = *(float *)(param_2 + 0x54) * *(float *)(param_2 + 0x128);
  param_1[9] = *(undefined4 *)(param_2 + 8);
  param_1[10] = *(float *)(param_2 + 0x5c) * *(float *)(param_2 + 0x128);
  param_1[3] = *(undefined4 *)(param_3 + 8);
  param_1[4] = *(undefined4 *)(param_3 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 0x140);
  param_1[0x14] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  return;
}

// 011B5850  FUN_011b5850  size=12  [run]
undefined4 __fastcall FUN_011b5850(undefined4 param_1)

{
  FUN_011b5180();
  return param_1;
}

// 011B5860  FUN_011b5860  size=68  [run]
void __thiscall
FUN_011b5860(undefined1 *param_1,undefined1 param_2,byte param_3,int param_4,undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_5;
  *(ushort *)(param_1 + 4) = (ushort)param_3;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_4 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_4 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_4 + 0x1c);
  return;
}

// 011B58B0  FUN_011b58b0  size=55  [run]
void __thiscall
FUN_011b58b0(undefined1 *param_1,undefined1 param_2,byte param_3,undefined4 param_4,
            undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_5;
  *(ushort *)(param_1 + 4) = (ushort)param_3;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 011B58F0  FUN_011b58f0  size=50  [run]
void __thiscall FUN_011b58f0(undefined2 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0x30;
  param_1[3] = 0xffff;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// 011B5930  FUN_011b5930  size=115  [run]
void __thiscall
FUN_011b5930(undefined1 *param_1,undefined4 param_2,byte param_3,undefined8 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined1 param_8,
            undefined1 param_9)

{
  undefined8 uVar1;
  
  *param_1 = param_8;
  *(undefined2 *)(param_1 + 1) = 0x100;
  *(ushort *)(param_1 + 4) = (ushort)param_3;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = *param_4;
  uVar1 = param_4[1];
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined2 *)(param_1 + 0x26) = param_6;
  *(undefined2 *)(param_1 + 0x28) = param_7;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  param_1[0x2a] = param_9;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

// 011B59B0  FUN_011b59b0  size=130  [run]
void __thiscall
FUN_011b59b0(undefined1 *param_1,undefined4 param_2,byte param_3,undefined8 *param_4,
            undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined1 param_8,
            undefined1 param_9,char param_10)

{
  undefined8 uVar1;
  
  *param_1 = param_8;
  *(undefined2 *)(param_1 + 1) = 0x100;
  *(ushort *)(param_1 + 4) = (ushort)param_3;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  *(undefined8 *)(param_1 + 0x30) = *param_4;
  uVar1 = param_4[1];
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined2 *)(param_1 + 0x26) = param_6;
  *(undefined2 *)(param_1 + 0x28) = param_7;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  param_1[0x2a] = param_9;
  param_1[1] = (-(param_10 != '\0') & 0x10U) + 1;
  return;
}

// 011B5A40  FUN_011b5a40  size=135  [run]
void __thiscall
FUN_011b5a40(undefined2 *param_1,undefined8 *param_2,undefined4 param_3,undefined2 param_4,
            undefined2 param_5,undefined1 param_6,char param_7,undefined1 param_8)

{
  undefined8 uVar1;
  
  *param_1 = 0xf;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0x50;
  param_1[3] = 0xffff;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0xffff;
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  uVar1 = param_2[1];
  param_1[8] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x16) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x13] = param_4;
  param_1[0x14] = param_5;
  *(undefined1 *)(param_1 + 0x15) = param_8;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(byte *)((int)param_1 + 1) = (-(param_7 != '\0') & 0x10U) + 1;
  *(undefined1 *)(param_1 + 0x22) = param_6;
  return;
}

// 011B5AD0  FUN_011b5ad0  size=77  [run]
void __thiscall FUN_011b5ad0(undefined2 *param_1,int param_2)

{
  *param_1 = 0xe;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0x30;
  param_1[3] = 0xffff;
  param_1[8] = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x20);
  return;
}

// 011B5B20  FUN_011b5b20  size=37  [run]
void FUN_011b5b20(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 011B5B50  FUN_011b5b50  size=39  [run]
void FUN_011b5b50(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 011B5B80  FUN_011b5b80  size=39  [run]
void FUN_011b5b80(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 011B5BB0  FUN_011b5bb0  size=39  [run]
void FUN_011b5bb0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 011B5BE0  hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::vf00  size=50  [run]
undefined4 * __thiscall
hkpMultiThreadedSimulation::MtEntityEntityBroadPhaseListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBroadPhaseListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 011B5C20  hkpMultiThreadedSimulation::MtPhantomBroadPhaseListener::vf00  size=50  [run]
undefined4 * __thiscall
hkpMultiThreadedSimulation::MtPhantomBroadPhaseListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBroadPhaseListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 011B5C60  hkpMultiThreadedSimulation::MtBroadPhaseBorderListener::vf00  size=50  [run]
undefined4 * __thiscall
hkpMultiThreadedSimulation::MtBroadPhaseBorderListener::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBroadPhaseListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 011B5CA0  FUN_011b5ca0  size=80  [run]
undefined4 FUN_011b5ca0(int param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)((int)*(char *)(param_2 + 0x1a) + *param_3 + 0x1e60 +
                   *(char *)(param_1 + 0x1a) * 10);
  if (cVar1 == '\0') {
    return 0;
  }
  param_3[6] = *(int *)(cVar1 * 0x40 + 0x1ee0 + *param_3);
  uVar2 = FUN_011cf720(param_1,param_2,param_3);
  return uVar2;
}

// 011B5CF0  FUN_011b5cf0  size=13  [run]
int FUN_011b5cf0(int param_1)

{
  return *(byte *)(param_1 + 0xe) - 1;
}

// 011B5D20  FUN_011b5d20  size=25  [run]
void FUN_011b5d20(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 011B5D40  FUN_011b5d40  size=16  [run]
undefined4 __thiscall FUN_011b5d40(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 011B5D50  FUN_011b5d50  size=21  [run]
void __thiscall FUN_011b5d50(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 011B5DB0  FUN_011b5db0  size=25  [run]
void FUN_011b5db0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 011B5E10  FUN_011b5e10  size=23  [run]
int __thiscall FUN_011b5e10(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  return iVar1 * 0x70 + *param_1;
}

// 011B5E40  FUN_011b5e40  size=33  [run]
void FUN_011b5e40(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_011b5450(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 011B5E70  FUN_011b5e70  size=33  [run]
void FUN_011b5e70(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_011b5560(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 011B5EA0  FUN_011b5ea0  size=13  [run]
void __thiscall FUN_011b5ea0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 011B5EB0  FUN_011b5eb0  size=105  [run]
int __thiscall FUN_011b5eb0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x1c);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = 2;
    do {
      puVar1[-2] = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0x1c;
}

// 011B5F20  FUN_011b5f20  size=54  [run]
int __thiscall FUN_011b5f20(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 011B5F60  FUN_011b5f60  size=15  [run]
int __thiscall FUN_011b5f60(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 011B5F90  FUN_011b5f90  size=34  [run]
void FUN_011b5f90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 << 4);
  return;
}

// 011B5FC0  FUN_011b5fc0  size=18  [run]
int __thiscall FUN_011b5fc0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 011B5FE0  FUN_011b5fe0  size=58  [run]
void FUN_011b5fe0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 011B6020  FUN_011b6020  size=69  [run]
void FUN_011b6020(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 011B6070  FUN_011b6070  size=62  [run]
void FUN_011b6070(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 011B60B0  FUN_011b60b0  size=73  [run]
void FUN_011b60b0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 011B6130  FUN_011b6130  size=63  [run]
void __thiscall FUN_011b6130(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B6170  FUN_011b6170  size=40  [run]
void FUN_011b6170(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 011B61A0  FUN_011b61a0  size=64  [run]
void FUN_011b61a0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x50 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 011B61E0  FUN_011b61e0  size=75  [run]
void FUN_011b61e0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x50 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 011B6230  FUN_011b6230  size=64  [run]
void FUN_011b6230(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 011B6270  FUN_011b6270  size=75  [run]
void FUN_011b6270(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x30 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 011B6300  FUN_011b6300  size=36  [run]
void __thiscall FUN_011b6300(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 011B6330  FUN_011b6330  size=101  [run]
int __fastcall FUN_011b6330(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x1c);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = 2;
    do {
      puVar1[-2] = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0x1c;
}

// 011B63C0  FUN_011b63c0  size=49  [run]
int __fastcall FUN_011b63c0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 011B6400  FUN_011b6400  size=67  [run]
void __thiscall FUN_011b6400(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 011B6450  FUN_011b6450  size=90  [run]
int * __thiscall FUN_011b6450(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 4 + 0x7fU & 0xffffff80;
  uVar1 = iVar3 + uVar4;
  if (((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(uVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 011B6500  FUN_011b6500  size=92  [run]
int * __thiscall FUN_011b6500(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 0x50 + 0x7fU & 0xffffff80;
  uVar1 = iVar3 + uVar4;
  if (((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(uVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 011B65B0  FUN_011b65b0  size=92  [run]
int * __thiscall FUN_011b65b0(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 0x30 + 0x7fU & 0xffffff80;
  uVar1 = iVar3 + uVar4;
  if (((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(uVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 011B6660  FUN_011b6660  size=63  [run]
void __fastcall FUN_011b6660(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B66A0  FUN_011b66a0  size=72  [run]
void __thiscall FUN_011b66a0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B66F0  FUN_011b66f0  size=64  [run]
void __thiscall FUN_011b66f0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B6730  FUN_011b6730  size=128  [run]
void __thiscall FUN_011b6730(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  *(undefined1 *)((int)param_1 + 0x6d) = *(undefined1 *)((int)param_2 + 0x6d);
  param_1[0x1c] = param_2[0x1c];
  return;
}

// 011B67B0  FUN_011b67b0  size=171  [run]
void FUN_011b67b0(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  iVar1 = *(char *)(param_1 + 0xc) * 0x40 + 0x1ed0 + *param_2;
  param_2[0x18] = iVar1;
  param_2[6] = *(int *)(iVar1 + 0x10);
  *param_3 = (int)(param_3 + 4);
  param_3[0xc0c] = 0x7f7fffee;
  param_3[0xc20] = 0;
  FUN_0118d840(param_1,param_2,param_3,*(undefined4 *)(param_1 + 8));
  if ((int *)*param_3 != param_3 + 4) {
    (**(code **)(**(int **)(param_1 + 8) + 0x18))(uVar2,uVar3,param_2,param_3);
  }
  if ((float)param_3[0xc0c] != 3.40282e+38) {
    FUN_011b2c20(param_3,param_1,param_4 + 0x100);
  }
  return;
}

// 011B6860  FUN_011b6860  size=68  [run]
void __thiscall FUN_011b6860(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 011B68B0  FUN_011b68b0  size=63  [run]
void __fastcall FUN_011b68b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B68F0  FUN_011b68f0  size=69  [run]
void __fastcall FUN_011b68f0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B6940  FUN_011b6940  size=64  [run]
void __fastcall FUN_011b6940(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B6980  FUN_011b6980  size=38  [run]
void FUN_011b6980(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011B69B0  FUN_011b69b0  size=104  [run]
int * __thiscall FUN_011b69b0(int *param_1,uint param_2)

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
    uVar3 = param_2 + 0x7f & 0xffffff80;
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

// 011B6A20  FUN_011b6a20  size=135  [run]
void __fastcall FUN_011b6a20(int *param_1)

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
  uVar4 = iVar2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 011B6AB0  FUN_011b6ab0  size=108  [run]
int * __thiscall FUN_011b6ab0(int *param_1,uint param_2)

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
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
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

// 011B6B20  FUN_011b6b20  size=143  [run]
void __fastcall FUN_011b6b20(int *param_1)

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
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 011B6BB0  FUN_011b6bb0  size=69  [run]
void __fastcall FUN_011b6bb0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B6C00  FUN_011b6c00  size=64  [run]
void __fastcall FUN_011b6c00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011B6C40  hkpMultiThreadedSimulation::vf00  size=52  [run]
int __thiscall hkpMultiThreadedSimulation::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkpBroadPhaseListener::hkpBroadPhaseListener_2();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011B6CD0  hkpContinuousSimulation::vf34  size=3  [run]
void hkpContinuousSimulation::vf34(void)

{
  return;
}

// 011B6CF0  hkpContinuousSimulation::vf3C  size=3  [run]
void hkpContinuousSimulation::vf3C(void)

{
  return;
}

// 011B6D00  hkpMultiThreadedSimulation::vf48  size=57  [run]
void __thiscall hkpMultiThreadedSimulation::vf48(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  iVar2 = 0;
  if (0 < *(int *)(iVar1 + 0x34)) {
    iVar3 = 0;
    do {
      *(float *)(*(int *)(iVar1 + 0x30) + iVar3) =
           *(float *)(*(int *)(iVar1 + 0x30) + iVar3) + param_2;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(int *)(iVar1 + 0x34));
  }
  return;
}

// 011B6D40  FUN_011b6d40  size=31  [run]
void FUN_011b6d40(undefined4 param_1,int param_2,int param_3)

{
  *(bool *)param_1 = *(uint *)(param_2 + 0xd0) < *(uint *)(param_3 + 0xd0);
  return;
}

// 011B6D60  FUN_011b6d60  size=107  [run]
void FUN_011b6d60(undefined1 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_3 + 0x30);
  if (*(uint *)(*(int *)(uVar1 + 4 + (uint)*(byte *)(uVar1 + 0x1a) * 4) + 0xd0) <
      *(uint *)(*(int *)(uVar2 + 4 + (uint)*(byte *)(uVar2 + 0x1a) * 4) + 0xd0)) {
    *param_1 = 1;
    return;
  }
  if (*(int *)(*(int *)(uVar1 + 4 + (uint)*(byte *)(uVar1 + 0x1a) * 4) + 0xd0) ==
      *(int *)(*(int *)(uVar2 + 4 + (uint)*(byte *)(uVar2 + 0x1a) * 4) + 0xd0)) {
    *param_1 = uVar1 < uVar2;
    return;
  }
  *param_1 = 0;
  return;
}

// 011B6DD0  FUN_011b6dd0  size=120  [run]
void FUN_011b6dd0(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  
  iVar19 = 0;
  if (0 < param_2[1]) {
    do {
      iVar1 = *(int *)(*param_2 + iVar19 * 4);
      iVar18 = *(int *)(param_1 + 0xc) + *(int *)(iVar1 + 0xa0);
      uVar14 = *(undefined4 *)(iVar1 + 0x1b4);
      uVar15 = *(undefined4 *)(iVar1 + 0x1b8);
      uVar16 = *(undefined4 *)(iVar1 + 0x1bc);
      *(undefined4 *)(iVar18 + 0x10) = *(undefined4 *)(iVar1 + 0x1b0);
      *(undefined4 *)(iVar18 + 0x14) = uVar14;
      *(undefined4 *)(iVar18 + 0x18) = uVar15;
      *(undefined4 *)(iVar18 + 0x1c) = uVar16;
      fVar2 = *(float *)(iVar1 + 0x1c0);
      fVar3 = *(float *)(iVar1 + 0x1c4);
      fVar4 = *(float *)(iVar1 + 0x1c8);
      pfVar17 = (float *)((*(uint *)(iVar1 + 0xa0) >> 7) * 0x30 + *(int *)(param_1 + 0x18));
      fVar5 = pfVar17[5];
      fVar6 = pfVar17[6];
      fVar7 = pfVar17[7];
      fVar8 = pfVar17[1];
      fVar9 = pfVar17[2];
      fVar10 = pfVar17[3];
      fVar11 = pfVar17[9];
      fVar12 = pfVar17[10];
      fVar13 = pfVar17[0xb];
      iVar19 = iVar19 + 1;
      *(float *)(iVar18 + 0x20) = fVar3 * pfVar17[4] + fVar2 * *pfVar17 + fVar4 * pfVar17[8];
      *(float *)(iVar18 + 0x24) = fVar3 * fVar5 + fVar2 * fVar8 + fVar4 * fVar11;
      *(float *)(iVar18 + 0x28) = fVar3 * fVar6 + fVar2 * fVar9 + fVar4 * fVar12;
      *(float *)(iVar18 + 0x2c) = fVar3 * fVar7 + fVar2 * fVar10 + fVar4 * fVar13;
    } while (iVar19 < param_2[1]);
  }
  return;
}

// 011B6E50  hkpMultiThreadedSimulation::vf38  size=106  [run]
void __thiscall hkpMultiThreadedSimulation::vf38(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x34) + -1;
  if (-1 < iVar2) {
    iVar5 = iVar2 * 0x70;
    do {
      if (*(int *)(*(int *)(param_1 + 0x30) + 0x14 + iVar5) == *(int *)(param_2 + 8)) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
        if (*(int *)(param_1 + 0x34) != iVar2) {
          puVar1 = (undefined4 *)(iVar5 + *(int *)(param_1 + 0x30));
          iVar3 = (*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 0x70) - (int)puVar1;
          iVar4 = 0xe;
          do {
            *puVar1 = *(undefined4 *)(iVar3 + (int)puVar1);
            puVar1[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar1);
            puVar1 = puVar1 + 2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar2 = iVar2 + -1;
      iVar5 = iVar5 + -0x70;
    } while (-1 < iVar2);
  }
  return;
}

// 011B6EC0  FUN_011b6ec0  size=744  [run]
void FUN_011b6ec0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  LPVOID pvVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_2 != 0) {
    pvVar9 = TlsGetValue(DAT_01f8fc54);
    puVar4 = *(undefined4 **)((int)pvVar9 + 4);
    if (puVar4 < *(undefined4 **)((int)pvVar9 + 0xc)) {
      *puVar4 = "LtBroadPhase";
      puVar4[3] = "StGatherAabbs";
      uVar8 = rdtsc();
      local_8 = (int)uVar8;
      puVar4[1] = local_8;
      *(undefined4 **)((int)pvVar9 + 4) = puVar4 + 4;
    }
    pvVar9 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = *(int *)((int)pvVar9 + 0xc);
    uVar10 = param_2 * 0x20 + 0x7fU & 0xffffff80;
    uVar11 = iVar5 + uVar10;
    if ((*(int *)((int)pvVar9 + 8) < (int)uVar10) || (*(uint *)((int)pvVar9 + 0x10) < uVar11)) {
      local_8 = FUN_0100b780(uVar10);
    }
    else {
      *(uint *)((int)pvVar9 + 0xc) = uVar11;
      local_8 = iVar5;
    }
    pvVar9 = TlsGetValue(DAT_01f8fc4c);
    local_10 = *(int *)((int)pvVar9 + 0xc);
    uVar11 = param_2 * 4 + 0x7fU & 0xffffff80;
    if ((*(int *)((int)pvVar9 + 8) < (int)uVar11) ||
       (*(uint *)((int)pvVar9 + 0x10) < local_10 + uVar11)) {
      local_10 = FUN_0100b780(uVar11);
    }
    else {
      *(uint *)((int)pvVar9 + 0xc) = local_10 + uVar11;
    }
    local_c = param_2 + -1;
    if (-1 < local_c) {
      local_14 = local_10 - (int)param_1;
      piVar12 = (int *)(local_8 + 8);
      do {
        iVar5 = *param_1;
        *(int *)(local_14 + (int)param_1) = iVar5 + 0x24;
        local_18 = iVar5;
        if (*(uint *)(iVar5 + 0x40) < *(uint *)(iVar5 + 0x30)) {
          FUN_011c0db0(*(undefined4 *)(param_3 + 0x70),&local_18,1);
        }
        bVar1 = *(byte *)(iVar5 + 0x3f);
        bVar2 = *(byte *)(iVar5 + 0x3e);
        iVar6 = *(int *)(iVar5 + 0x38);
        iVar7 = *(int *)(iVar5 + 0x30);
        bVar3 = *(byte *)(iVar5 + 0x3c);
        piVar12[-1] = *(int *)(iVar5 + 0x34) - ((uint)*(byte *)(iVar5 + 0x3d) << (bVar1 & 0x1f));
        *piVar12 = iVar6 - ((uint)bVar2 << (bVar1 & 0x1f));
        piVar12[-2] = iVar7 - ((uint)bVar3 << (bVar1 & 0x1f));
        bVar2 = *(byte *)(iVar5 + 0x4e);
        bVar3 = *(byte *)(iVar5 + 0x4c);
        iVar6 = *(int *)(iVar5 + 0x48);
        iVar7 = *(int *)(iVar5 + 0x40);
        piVar12[3] = ((uint)*(byte *)(iVar5 + 0x4d) << (bVar1 & 0x1f)) + *(int *)(iVar5 + 0x44);
        piVar12[2] = ((uint)bVar3 << (bVar1 & 0x1f)) + iVar7;
        piVar12[4] = ((uint)bVar2 << (bVar1 & 0x1f)) + iVar6;
        param_1 = param_1 + 1;
        local_c = local_c + -1;
        piVar12 = piVar12 + 8;
      } while (-1 < local_c);
    }
    iVar5 = local_10;
    pvVar9 = TlsGetValue(DAT_01f8fc54);
    puVar4 = *(undefined4 **)((int)pvVar9 + 4);
    if (puVar4 < *(undefined4 **)((int)pvVar9 + 0xc)) {
      *puVar4 = "St3AxisSweep";
      uVar8 = rdtsc();
      puVar4[1] = (int)uVar8;
      *(undefined4 **)((int)pvVar9 + 4) = puVar4 + 3;
    }
    if (*(int *)(*(int *)(param_3 + 0x58) + 0x1c) != 0) {
      FUN_01159f60();
    }
    (**(code **)(**(int **)(param_3 + 0x58) + 0x30))(iVar5,local_8,param_2,param_4,param_5);
    if (*(int *)(*(int *)(param_3 + 0x58) + 0x1c) != 0) {
      FUN_01159f70();
    }
    pvVar9 = TlsGetValue(DAT_01f8fc4c);
    if (((*(int *)((int)pvVar9 + 8) < (int)uVar11) ||
        (uVar11 + iVar5 != *(int *)((int)pvVar9 + 0xc))) || (*(int *)((int)pvVar9 + 0x14) == iVar5))
    {
      FUN_0100b9b0(iVar5,uVar11);
    }
    else {
      *(int *)((int)pvVar9 + 0xc) = iVar5;
    }
    pvVar9 = TlsGetValue(DAT_01f8fc4c);
    if (((*(int *)((int)pvVar9 + 8) < (int)uVar10) ||
        (uVar10 + local_8 != *(int *)((int)pvVar9 + 0xc))) ||
       (*(int *)((int)pvVar9 + 0x14) == local_8)) {
      FUN_0100b9b0(local_8,uVar10);
    }
    else {
      *(int *)((int)pvVar9 + 0xc) = local_8;
    }
    if (0 < *(int *)(param_4 + 4) + *(int *)(param_5 + 4)) {
      pvVar9 = TlsGetValue(DAT_01f8fc54);
      puVar4 = *(undefined4 **)((int)pvVar9 + 4);
      if (puVar4 < *(undefined4 **)((int)pvVar9 + 0xc)) {
        *puVar4 = "StRemoveDup";
        uVar8 = rdtsc();
        puVar4[1] = (int)uVar8;
        *(undefined4 **)((int)pvVar9 + 4) = puVar4 + 3;
      }
      FUN_0146d2b0(param_4,param_5);
    }
    pvVar9 = TlsGetValue(DAT_01f8fc54);
    puVar4 = *(undefined4 **)((int)pvVar9 + 4);
    if (puVar4 < *(undefined4 **)((int)pvVar9 + 0xc)) {
      *puVar4 = &DAT_017e01a0;
      uVar8 = rdtsc();
      puVar4[1] = (int)uVar8;
      *(undefined4 **)((int)pvVar9 + 4) = puVar4 + 3;
    }
  }
  return;
}


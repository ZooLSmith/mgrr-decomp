// lib/havok/unit_007EE850.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 007EE850..007EE850, 1 functions

#include "types.h"

// 007EE850  hkpCdPointCollector::hkpCdPointCollector_19  size=568  [run]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_19(int *param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  FUN_004066f0();
  local_1ac = 0x7f7fffee;
  local_1a0 = local_190;
  iVar5 = 0;
  local_1b0 = hkpAllCdPointCollector::vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  FUN_00900350(&local_1b0);
  if (local_19c < 1) {
    local_1b0 = hkpAllCdPointCollector::vftable;
    local_19c = 0;
    if (-1 < (int)local_198) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
    }
    if (DAT_01885d68 == 1) {
      return;
    }
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
  }
  else {
    if (0 < local_19c) {
      iVar7 = 0;
      do {
        pfVar2 = (float *)(local_1a0 + iVar7);
        fVar3 = pfVar2[10];
        if (*(char *)((int)fVar3 + 0x18) == '\x02') {
          iVar6 = (int)*(char *)((int)fVar3 + 0x10) + (int)fVar3;
        }
        else {
          iVar6 = 0;
        }
        if (*(char *)((int)fVar3 + 0x18) == '\x01') {
          iVar4 = (int)*(char *)((int)fVar3 + 0x10) + (int)fVar3;
        }
        else {
          iVar4 = 0;
        }
        if (((iVar6 == 0) && (iVar4 != 0)) && (((byte)*(undefined4 *)(iVar4 + 0x2c) & 0x1f) != 0xb))
        {
          fVar3 = pfVar2[7];
          *pfVar2 = fVar3 * pfVar2[4] + *pfVar2;
          pfVar2[1] = fVar3 * pfVar2[5] + pfVar2[1];
          pfVar2[2] = fVar3 * pfVar2[6] + pfVar2[2];
          pfVar2[3] = fVar3 * pfVar2[7] + pfVar2[3];
          pfVar2[4] = -pfVar2[4];
          pfVar2[5] = -pfVar2[5];
          pfVar2[6] = -pfVar2[6];
          pfVar2[7] = pfVar2[7];
          fVar3 = pfVar2[7];
          if (fVar3 < 0.0) {
            local_1c0 = pfVar2[4] * fVar3;
            local_1bc = pfVar2[5] * fVar3;
            local_1b8 = pfVar2[6] * fVar3;
            local_1b4 = fVar3 * local_1b4;
            (**(code **)(*param_1 + 0x70))(&local_1c0);
          }
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x30;
      } while (iVar5 < local_19c);
    }
    local_1b0 = hkpAllCdPointCollector::vftable;
    local_19c = 0;
    if (-1 < (int)local_198) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
    }
    if (DAT_01885d68 == 1) {
      return;
    }
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
  }
  if ((iVar5 == 0) && (DAT_01b35fac != 0)) {
    local_198 = 0x80000000;
    local_1a0 = (undefined1 *)0x0;
    local_1b0 = vftable;
    if (DAT_01885db8 == 0) {
      FUN_00dd7320();
    }
  }
  return;
}


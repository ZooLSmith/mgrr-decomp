// lib/havok/unit_0053F3E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0053F3E0..0053F3E0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 0053F3E0  hkpAllCdPointCollector::hkpAllCdPointCollector_6  size=519  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_6(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined1 auStack_1f0 [48];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  uint uStack_198;
  undefined1 auStack_190 [396];
  
  FUN_004066f0();
  if (*(int *)(param_1 + 0x1494) != 0) {
    local_200 = 0.0;
    local_1fc = 0.0;
    local_1f8 = 3.0;
    D3DXVec3TransformNormal(&local_200,&local_200,(void *)(param_1 + 0x10));
    local_200 = *(float *)(param_1 + 0x40) + local_200;
    local_1fc = *(float *)(param_1 + 0x44) + local_1fc;
    local_1f8 = *(float *)(param_1 + 0x48) + local_1f8;
    FID_conflict__memcpy(auStack_1f0,(void *)(param_1 + 0x10),0x40);
    fStack_1c0 = local_200;
    fStack_1bc = local_1fc;
    fStack_1b8 = local_1f8;
    Phantom::setTransform(auStack_1f0);
    if (*(int *)(param_1 + 0x1494) != 0) {
      puStack_1a0 = auStack_190;
      uStack_1ac = 0x7f7fffee;
      ppuStack_1b0 = vftable;
      uStack_198 = 0x80000008;
      iStack_19c = 0;
      FUN_00900350(&ppuStack_1b0);
      if ((0 < iStack_19c) && (iVar5 = 0, 0 < iStack_19c)) {
        iVar4 = 0;
        do {
          iVar2 = *(int *)(puStack_1a0 + iVar4 + 0x28);
          if (*(char *)(iVar2 + 0x18) == '\x02') {
            iVar3 = *(char *)(iVar2 + 0x10) + iVar2;
          }
          else {
            iVar3 = 0;
          }
          if (*(char *)(iVar2 + 0x18) == '\x01') {
            iVar2 = *(char *)(iVar2 + 0x10) + iVar2;
          }
          else {
            iVar2 = 0;
          }
          if (((iVar3 == 0) && (iVar2 != 0)) &&
             (((byte)*(undefined4 *)(iVar2 + 0x2c) & 0x1f) == 0xb)) {
            iVar2 = FUN_008f7780(iVar2);
            if (iVar2 == 0) {
              hkpCdPointCollector::hkpCdPointCollector();
              FUN_00406760();
              return;
            }
            if (*(int *)(iVar2 + 0x4b0) == 0x42300) {
              FUN_005d8530(0x3dcccccd);
            }
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar5 < iStack_19c);
      }
      ppuStack_1b0 = vftable;
      iStack_19c = 0;
      if (-1 < (int)uStack_198) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_1a0,(uStack_198 & 0x3fffffff) * 0x30);
      }
    }
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}


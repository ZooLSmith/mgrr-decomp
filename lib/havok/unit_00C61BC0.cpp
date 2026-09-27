// lib/havok/unit_00C61BC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C61BC0..00C61BC0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 00C61BC0  hkpAllCdPointCollector::hkpAllCdPointCollector_33  size=329  [run]
/* WARNING: Removing unreachable block (ram,0x00c61c8b) */

int hkpAllCdPointCollector::hkpAllCdPointCollector_33
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_1c4 [16];
  undefined **ppuStack_1b4;
  undefined4 uStack_1b0;
  undefined1 *puStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined1 auStack_194 [400];
  
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    puStack_1a4 = auStack_194;
    uStack_1b0 = 0x7f7fffee;
    ppuStack_1b4 = vftable;
    uStack_19c = 0x80000008;
    uStack_1a0 = 0;
    iVar1 = FUN_009f8b40();
    iVar1 = FUN_0090eea0(&ppuStack_1b4,auStack_1c4,param_1,param_2,param_3,iVar1 << 0x10 | 6,
                         "Xcombo Low Check");
    if ((iVar1 != 0) && (param_4 != 0)) {
      FUN_0112bcf0();
      iVar2 = *(int *)(puStack_1a4 + 0x28);
      iVar3 = 0;
      iVar4 = 0;
      if (*(char *)(iVar2 + 0x18) == '\x01') {
        iVar3 = *(char *)(iVar2 + 0x10) + iVar2;
      }
      if (*(char *)(iVar2 + 0x18) == '\x02') {
        if (*(char *)(iVar2 + 0x18) == '\x02') {
          iVar4 = *(char *)(iVar2 + 0x10) + iVar2;
        }
        else {
          iVar4 = 0;
        }
      }
      if ((iVar3 != 0) && (iVar2 = FUN_008f7780(iVar3), iVar2 == param_4)) {
        iVar1 = 0;
      }
      if ((iVar4 != 0) && (iVar2 = FUN_008f7780(iVar4), iVar2 == param_4)) {
        iVar1 = 0;
      }
    }
    ppuStack_1b4 = vftable;
    uStack_1a0 = 0;
    if (-1 < (int)uStack_19c) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_1a4,(uStack_19c & 0x3fffffff) * 0x30);
    }
    return iVar1;
  }
  return 1;
}


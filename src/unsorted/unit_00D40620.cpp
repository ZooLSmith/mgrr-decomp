// src/unsorted/unit_00D40620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D40620..00D40F60, 5 functions

#include "types.h"

// 00D40620  FUN_00d40620  size=214  [run]
undefined4 __fastcall FUN_00d40620(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  uVar2 = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x94);
  if (*(float *)(param_1 + 0xf4) == 0.0) {
    uVar3 = *(undefined4 *)(param_1 + 0x98);
  }
  switch(*(undefined4 *)(param_1 + 0xe0)) {
  case 0:
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x90),1,3);
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    return 0;
  case 1:
    iVar1 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x90));
    if (iVar1 == 0) {
      fVar4 = (float10)FUN_00d35d30(*(undefined4 *)(param_1 + 0x90),0);
      FUN_00cb28a0(uVar3,(float)fVar4);
      FUN_00cb2310(uVar3,1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
      FUN_00cce0e0(uVar3,1,3);
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      return 0;
    }
    break;
  case 2:
    iVar1 = FUN_00cb31a0(uVar3);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      return 0;
    }
    break;
  case 3:
    uVar2 = 1;
  }
  return uVar2;
}

// 00D40710  FUN_00d40710  size=286  [run]
undefined4 __fastcall FUN_00d40710(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0xe4)) {
  case 0:
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x9c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa0),1,3);
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    return 0;
  case 1:
    fVar3 = (float10)FUN_00d35d30(*(undefined4 *)(param_1 + 0x9c),0);
    iVar1 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x9c));
    if (iVar1 == 0) {
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xa4),(float)(fVar3 - (float10)11.0));
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xa8),(float)(fVar3 - (float10)11.0));
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa4),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa8),1);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0xa4),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0xa8),1,3);
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      return 0;
    }
    break;
  case 2:
    iVar1 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0xa4));
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      return 0;
    }
    break;
  case 3:
    uVar2 = 1;
  }
  return uVar2;
}

// 00D40840  FUN_00d40840  size=848  [run]
undefined4 __fastcall FUN_00d40840(int param_1)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  float10 fVar3;
  float local_8;
  uint local_4;
  
  uVar2 = 0;
  switch(*(undefined4 *)(param_1 + 0xe8)) {
  case 0:
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xb4),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xb8),1,3);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cded00(*(undefined4 *)(param_1 + 0xb0),4);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cded00(*(undefined4 *)(param_1 + 0xbc),4);
    }
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    return 0;
  case 1:
    local_8 = 0.0;
    if (DAT_01dc2cd8 != 0) {
      local_8 = 9.0;
    }
    iVar1 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0xb4));
    if (iVar1 == 0) {
      fVar3 = (float10)FUN_00d35d30(*(undefined4 *)(param_1 + 0xb4),0);
      local_4 = (uint)((float10)0 != fVar3);
      fVar3 = (float10)local_4 * (float10)local_8 + fVar3;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0xc0),(float)fVar3);
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xb0),((float)fVar3 + 24.0) * 0.029411765);
      fVar3 = (float10)FUN_00d35d30(*(undefined4 *)(param_1 + 0xb4),1);
      if ((float10)0 < fVar3) {
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0xc0),(float)(fVar3 + (float10)local_8));
        FUN_00cb2900(*(undefined4 *)(param_1 + 0xc0),0x42300000);
        FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xbc),
                     ((float)(fVar3 + (float10)local_8) + 24.0) * 0.029411765);
      }
      if (*(int *)(param_1 + 0x10c) == 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xc0),0);
        FUN_00cb2900(*(undefined4 *)(param_1 + 0xac),0xc1980000);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xac),1);
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xac),3);
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xc4),1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xc4),3);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      return 0;
    }
    fVar3 = (float10)FUN_00d35d30(*(undefined4 *)(param_1 + 0xb4),0);
    local_4 = (uint)((float10)0 != fVar3);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xb0),
                 (float)(((float10)local_4 * (float10)local_8 + fVar3 + (float10)24.0) *
                        (float10)0.029411765));
    fVar3 = (float10)FUN_00d35d30(*(undefined4 *)(param_1 + 0xb4),1);
    if ((float10)0 < fVar3) {
      FUN_00cb2bc0(*(undefined4 *)(param_1 + 0xbc),
                   (float)((fVar3 + (float10)local_8 + (float10)24.0) * (float10)0.029411765));
    }
    if (*(int *)(param_1 + 0x10c) == 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xc0),0);
      FUN_00cb2900(*(undefined4 *)(param_1 + 0xac),0xc1980000);
      return 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0xfc) == *(int *)(param_1 + 0x100)) {
      *(undefined4 *)(param_1 + 0xe8) = 3;
      return 0;
    }
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    if (3 < *(int *)(param_1 + 0x104)) {
      *(undefined4 *)(param_1 + 0x104) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xc4 + *(int *)(param_1 + 0x100) * 4),1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xc4 + *(int *)(param_1 + 0x100) * 4),extraout_EDX);
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
      return 0;
    }
    break;
  case 3:
    uVar2 = 1;
  }
  return uVar2;
}

// 00D40BA0  FUN_00d40ba0  size=930  [run]
undefined4 __fastcall FUN_00d40ba0(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_14;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  uVar4 = 0;
  switch(*(undefined4 *)(param_1 + 0x1bc)) {
  case 0:
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x13c) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x13c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x140) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x144) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x144) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x140),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x144),1,3);
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
    return 0;
  case 1:
    fVar5 = (float10)FUN_00d35e80(param_1,*(undefined4 *)(param_1 + 0x140));
    local_14 = (float)(uint)((float10)0 != fVar5);
    fVar1 = (float)(fVar5 - (float10)(int)local_14 * (float10)6.0);
    iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x140));
    if (iVar3 == 0) {
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x148),fVar1);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x14c),fVar1);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x150),fVar1);
      pfVar2 = (float *)FUN_00cb32a0(local_10,*(undefined4 *)(param_1 + 0x13c));
      *(float *)(param_1 + 0x1f8) = *pfVar2 + *pfVar2 + fVar1;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x148),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x14c),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x150),1);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x14c),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x150),1,3);
      *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
    }
    fVar5 = (float10)FUN_00cc13f0(param_1,*(undefined4 *)(param_1 + 0x13c),fVar1);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x13c),(float)fVar5);
    return 0;
  case 2:
    fVar5 = (float10)FUN_00d047a0(param_1,*(undefined4 *)(param_1 + 0x14c));
    local_14 = (float)fVar5;
    iVar3 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x14c));
    if (iVar3 == 0) {
      local_14 = local_14 - 6.0;
      *(float *)(param_1 + 0x1f8) = local_14 + *(float *)(param_1 + 0x1f8);
      pfVar2 = (float *)FUN_00cb32a0(local_8,*(undefined4 *)(param_1 + 0x148));
      fVar1 = *pfVar2 + *pfVar2 + *(float *)(param_1 + 0x1f8);
      *(float *)(param_1 + 0x1f8) = fVar1;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 400),fVar1);
      *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
      *(undefined4 *)(param_1 + 0x1ec) = 2;
    }
    fVar5 = (float10)FUN_00cc13f0(param_1,*(undefined4 *)(param_1 + 0x148),local_14);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x148),(float)fVar5);
    return 0;
  case 3:
    if (*(int *)(param_1 + 0x1e4) == *(int *)(param_1 + 0x1e8)) {
      fVar1 = (float)(*(int *)(param_1 + 0x1e4) * 0x1f) + *(float *)(param_1 + 0x1f8);
      *(float *)(param_1 + 0x1f8) = fVar1;
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x134),fVar1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x134),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x134),1,3);
      *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
      return 0;
    }
    iVar3 = FUN_00ca8620(param_1 + 0x1ec,3);
    if (iVar3 != 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x194 + *(int *)(param_1 + 0x1e8) * 4),1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x194 + *(int *)(param_1 + 0x1e8) * 4),3);
      *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + 1;
      return 0;
    }
    break;
  case 4:
    iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x134));
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
      return 0;
    }
    break;
  case 5:
    uVar4 = 1;
  }
  return uVar4;
}

// 00D40F60  FUN_00d40f60  size=934  [run]
undefined4 __fastcall FUN_00d40f60(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  uint local_4;
  
  uVar4 = 0;
  switch(*(undefined4 *)(param_1 + 0x1c0)) {
  case 0:
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x158) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x158) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x15c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x160) < *(uint *)(iVar3 + 0x80))) &&
       (iVar3 = *(uint *)(param_1 + 0x160) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x3b0) = 1;
    }
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x15c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x160),1,3);
    *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
    return 0;
  case 1:
    fVar5 = (float10)FUN_00d35e80(param_1,*(undefined4 *)(param_1 + 0x15c));
    local_4 = (uint)((float10)0 != fVar5);
    fVar1 = (float)(fVar5 - (float10)local_4 * (float10)6.0);
    iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x15c));
    if (iVar3 == 0) {
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x164),fVar1);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x168),fVar1);
      FUN_00cb28a0(*(undefined4 *)(param_1 + 0x16c),fVar1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x164),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x168),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x16c),1);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x168),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x16c),1,3);
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
      *(float *)(param_1 + 0x1fc) = fVar1;
    }
    fVar5 = (float10)FUN_00cc13f0(param_1,*(undefined4 *)(param_1 + 0x158),fVar1);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x158),(float)fVar5);
    return 0;
  case 2:
    fVar5 = (float10)FUN_00d047a0(param_1,*(undefined4 *)(param_1 + 0x168));
    local_4 = (uint)((float10)0 != fVar5);
    fVar1 = (float)(fVar5 - (float10)local_4 * (float10)6.0);
    iVar3 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x168));
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x1f0) == 0) {
        *(undefined4 *)(param_1 + 0x1c0) = 4;
      }
      else {
        fVar2 = fVar1 + *(float *)(param_1 + 0x1fc);
        *(float *)(param_1 + 0x1fc) = fVar2;
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x170),fVar2);
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x1fc));
        FUN_00cb28a0(*(undefined4 *)(param_1 + 0x178),*(undefined4 *)(param_1 + 0x1fc));
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x170),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x174),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x178),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x174),1,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0x178),1,3);
        *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
      }
    }
    fVar5 = (float10)FUN_00cc13f0(param_1,*(undefined4 *)(param_1 + 0x164),fVar1);
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x164),(float)fVar5);
    return 0;
  case 3:
    fVar5 = (float10)FUN_00d35e80(param_1,*(undefined4 *)(param_1 + 0x174));
    local_4 = (uint)((float10)0 != fVar5);
    iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x174));
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x1c0) = *(int *)(param_1 + 0x1c0) + 1;
    }
    fVar5 = (float10)FUN_00cc13f0(param_1,*(undefined4 *)(param_1 + 0x170),
                                  (float)(fVar5 - (float10)local_4 * (float10)6.0));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x170),(float)fVar5);
    return 0;
  case 4:
    uVar4 = 1;
  }
  return uVar4;
}


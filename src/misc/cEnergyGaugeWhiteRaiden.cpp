// src/misc/cEnergyGaugeWhiteRaiden.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD3F70..00D3C7D0, 4 functions

#include "types.h"

// 00CD3F70  cEnergyGaugeWhiteRaiden::cEnergyGaugeWhiteRaiden  size=298  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEnergyGaugeWhiteRaiden::cEnergyGaugeWhiteRaiden(undefined4 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x22] = 0;
  param_1[1] = 0;
  param_1[0x25] = 0;
  param_1[2] = 0;
  param_1[0x31] = 0;
  param_1[3] = 0;
  param_1[0x32] = 0;
  param_1[5] = 0;
  param_1[0x33] = 0;
  param_1[6] = 0;
  param_1[0x34] = 0;
  *param_1 = vftable;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[4] = 1;
  param_1[0x30] = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x27] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  _DAT_01dc0ddc = 0;
  _DAT_01dc0de0 = 0;
  DAT_01dc0de4 = 0;
  _DAT_01dc0de8 = 0;
  DAT_01dc0dd8 = 0;
  DAT_01dc0df4 = 0;
  DAT_01dc14fc = param_1;
  return;
}

// 00CEE140  cEnergyGaugeWhiteRaiden::vf00  size=30  [class]
undefined4 __thiscall cEnergyGaugeWhiteRaiden::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_34();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D3C4E0  cEnergyGaugeWhiteRaiden::vf08  size=738  [class]
void __fastcall cEnergyGaugeWhiteRaiden::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x8e);
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x90);
  }
  *(uint *)(param_1 + 0x24) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x92);
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x94);
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x96);
  }
  *(uint *)(param_1 + 0x30) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x9a);
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  *(uint *)(param_1 + 0x38) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xa2);
  }
  *(uint *)(param_1 + 0x3c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xa4);
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xa6);
  }
  *(uint *)(param_1 + 0x44) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xfe);
  }
  *(uint *)(param_1 + 0x48) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x100);
  }
  *(uint *)(param_1 + 0x4c) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x102);
  }
  *(uint *)(param_1 + 0x50) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x148);
  }
  *(uint *)(param_1 + 0x54) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x14a);
  }
  *(uint *)(param_1 + 0x58) = uVar1;
  if (iVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar2 + 0x14c);
  }
  *(uint *)(param_1 + 0x5c) = uVar1;
  if (iVar2 != 0) {
    FUN_00cdeec0(7);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x34);
  if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
     (*(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400 != 0)) {
    if (uVar1 < *(uint *)(iVar2 + 0x80)) {
      iVar2 = *(int *)(iVar2 + 0x7c) + 0x2a0 + uVar1 * 0x400;
    }
    else {
      iVar2 = 0;
    }
    *(undefined4 *)(iVar2 + 0xd0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x1c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x38) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x18);
  if (DAT_01dc2d70 == 0) {
    if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  else {
    if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(5);
    }
    *(undefined4 *)(param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x58) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0x58) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  iVar2 = FUN_009c5600();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_00d3c76f;
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_00d3c76f;
    uVar4 = 1;
  }
  FUN_00cdeec0(uVar4);
LAB_00d3c76f:
  *(int *)(param_1 + 0xe8) = iVar2;
  puVar3 = (undefined4 *)FUN_00dd3500(0x14,&DAT_01b7be50);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = cDamageDispPrologue::vftable;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    uVar4 = FUN_00d29960(0x10);
    puVar3[1] = uVar4;
    *(undefined4 **)(param_1 + 0xd4) = puVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}

// 00D3C7D0  cEnergyGaugeWhiteRaiden::vf14  size=2088  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEnergyGaugeWhiteRaiden::vf14(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  undefined8 uVar12;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  if ((((byte)DAT_01bea090 & 0x10) != 0) && (*(int *)(param_1 + 0xe4) == 0)) {
    FUN_00cd4230();
    iVar4 = *(int *)(param_1 + 0x18);
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x34) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x34) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x48) < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = *(uint *)(param_1 + 0x48) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    *(undefined4 *)(param_1 + 0xe4) = 1;
  }
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 0:
    local_60 = -12.0;
    if (DAT_01dc2cd8 != -1) {
      local_60 = *(float *)(&DAT_016bc038 + DAT_01dc2cd8 * 4);
    }
    fVar11 = (float10)FUN_00d2fa30(*(undefined4 *)(param_1 + 0x50));
    fVar11 = (float10)FUN_00cb8b30(*(undefined4 *)(param_1 + 0x4c),
                                   (float)(fVar11 + (float10)local_60));
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x4c),(float)fVar11);
    if ((DAT_01bea094 & 0x20000) != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 10;
      break;
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar4 = FUN_00d29960(4);
      *(int *)(param_1 + 0x98) = iVar4;
      *(undefined4 *)(iVar4 + 0x214) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x98) + 4) = 0;
      piVar9 = (int *)(param_1 + 0x9c);
      iVar4 = 2;
      do {
        if (*piVar9 == 0) {
          iVar5 = FUN_00d29960(5);
          *piVar9 = iVar5;
          *(undefined4 *)(iVar5 + 0x1e8) = 0;
        }
        iVar5 = *piVar9;
        piVar9 = piVar9 + 1;
        iVar4 = iVar4 + -1;
        *(undefined4 *)(iVar5 + 4) = 0;
      } while (iVar4 != 0);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x8c) = 9;
    }
    goto LAB_00d3c938;
  case 1:
LAB_00d3c938:
    if (((DAT_01dc1508 == 0) || (3 < *(int *)(DAT_01dc1508 + 0xa4))) &&
       (*(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1, 0x18 < *(int *)(param_1 + 0x90))) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    }
    break;
  case 2:
    uVar7 = *(uint *)(param_1 + 0x90) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x9c) + 4) = (uint)((int)uVar7 < 2);
    iVar4 = FUN_00ca8620(param_1 + 0x90,0xc);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    }
    break;
  case 3:
    uVar7 = *(uint *)(param_1 + 0x90) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x98) + 4) = (uint)((int)uVar7 < 2);
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 1;
    uVar7 = *(uint *)(param_1 + 0x90) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xa0) + 4) = (uint)((int)uVar7 < 2);
    fVar3 = *(float *)(param_1 + 0x94) + _DAT_018b8c78;
    *(float *)(param_1 + 0x94) = fVar3;
    if (1.0 < fVar3) {
      *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
    }
    uVar12 = FUN_00ca8620((uint *)(param_1 + 0x90),0xc);
    iVar4 = (int)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 == 0) break;
    goto LAB_00d3ca4e;
  case 4:
    fVar3 = *(float *)(param_1 + 0x94) + _DAT_018b8c78;
    *(float *)(param_1 + 0x94) = fVar3;
    if (1.0 < fVar3) {
      *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x98) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 4) = 1;
    if (*(float *)(param_1 + 0x94) == 1.0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x58),0);
      *(int *)(*(int *)(param_1 + 0xa0) + 4) = extraout_EDX;
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + extraout_EDX;
    }
    break;
  case 5:
    uVar7 = *(uint *)(param_1 + 0x90) & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x54),(int)uVar7 < 1);
    *(undefined4 *)(*(int *)(param_1 + 0x98) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 4) = 1;
    iVar4 = FUN_00ca8620(extraout_EDX_00,4);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(5);
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      *(undefined4 *)(param_1 + 0x74) = 1;
    }
    break;
  case 6:
    *(undefined4 *)(*(int *)(param_1 + 0x98) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 4) = 1;
    iVar4 = FUN_00ce4dd0(5);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      *(undefined4 *)(param_1 + 0x7c) = 1;
    }
    break;
  case 7:
    iVar4 = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x98) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + 4) = 1;
    if (*(int *)(param_1 + 0xc0) != 0) {
      uVar12 = FUN_00ca8620(param_1 + 0x90,0x1e);
      if ((int)uVar12 != 0) {
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + (int)((ulonglong)uVar12 >> 0x20);
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      break;
    }
LAB_00d3ca4e:
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + iVar4;
    break;
  case 8:
    uVar7 = *(uint *)(param_1 + 0x90) & 0x80000003;
    puVar1 = (uint *)(param_1 + 0x90);
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xa0) + 4) = (uint)(2 < (int)uVar7);
    uVar7 = *puVar1 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x98) + 4) = (uint)(2 < (int)uVar7);
    uVar7 = *puVar1 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0x9c) + 4) = (uint)(2 < (int)uVar7);
    iVar4 = FUN_00ca8620(puVar1,0xc);
    if (iVar4 != 0) {
      iVar4 = 0;
      if (*(int *)(param_1 + 0x98) != 0) {
        FUN_00cae160();
        *(int *)(param_1 + 0x98) = extraout_EDX_01;
        iVar4 = extraout_EDX_01;
      }
      iVar5 = *(int *)(param_1 + 0x9c);
      if (iVar5 != iVar4) {
        if ((*(uint *)(iVar5 + 0x24) & 1) == 0) {
          *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 1;
          *(int *)(iVar5 + 4) = iVar4;
        }
        *(int *)(param_1 + 0x9c) = iVar4;
      }
      iVar5 = *(int *)(param_1 + 0xa0);
      if (iVar5 != iVar4) {
        if ((*(uint *)(iVar5 + 0x24) & 1) == 0) {
          *(uint *)(iVar5 + 0x24) = *(uint *)(iVar5 + 0x24) | 1;
          *(int *)(iVar5 + 4) = iVar4;
        }
        *(int *)(param_1 + 0xa0) = iVar4;
      }
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    }
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x8c) = 10;
  default:
    break;
  case 0xb:
    uVar7 = *(uint *)(param_1 + 0x90) & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x54),0 < (int)uVar7);
    iVar4 = FUN_00ca8620(extraout_EDX_02,4);
    if (iVar4 != 0) {
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x54),0);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    }
    goto LAB_00d3cdcd;
  case 0xc:
LAB_00d3cdcd:
    if (((byte)DAT_01bea090 & 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x8c) < 0xb) && (((byte)DAT_01bea090 & 0x40) != 0)) {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x58) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x58) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (iVar4 != 0) {
      if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
        *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x9c);
    if (iVar4 != 0) {
      if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
        *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    iVar4 = *(int *)(param_1 + 0xa0);
    if (iVar4 != 0) {
      if ((*(uint *)(iVar4 + 0x24) & 1) == 0) {
        *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 1;
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0xb;
  }
  if ((*(int *)(param_1 + 0x8c) < 1) || (8 < *(int *)(param_1 + 0x8c))) {
    if (DAT_01dc0df4 != 0) {
      DAT_01dc0df4 = 0;
    }
  }
  else {
    if (DAT_01dc14a0 == 0) {
      puVar6 = &DAT_01dc14e0;
    }
    else {
      puVar6 = (undefined4 *)(DAT_01dc14a0 + 0x40);
    }
    local_50 = *puVar6;
    local_4c = puVar6[1];
    local_48 = puVar6[2];
    local_44 = puVar6[3];
    FUN_00d9fa80(&local_30,&local_50);
    iVar4 = *(int *)(param_1 + 0x9c);
    if (*(int *)(iVar4 + 0x18) != 0) {
      *(undefined4 *)(iVar4 + 0x80) = local_30;
      *(undefined4 *)(iVar4 + 0x84) = local_2c;
    }
    FUN_00cb8ad0(&local_5c);
    local_40 = local_5c;
    local_3c = local_58;
    local_38 = local_54;
    local_34 = 0x3f800000;
    FUN_00caccc0(local_20,&local_40);
    FUN_00cb5540(&local_30,local_20,*(undefined4 *)(param_1 + 0x94));
    iVar4 = *(int *)(param_1 + 0xa0);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x204);
    if (*(int *)(iVar4 + 0x18) != 0) {
      *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x200);
      *(undefined4 *)(iVar4 + 0x84) = uVar2;
    }
  }
  if (DAT_01dc0dd8 == 0) {
    if (*(int *)(param_1 + 0x98) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x98) + 4) = 0;
    }
    if (*(int *)(param_1 + 0x9c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x9c) + 4) = 0;
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xa0) + 4) = 0;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(*(int *)(param_1 + 0x14) + 4) = DAT_01dc0dd8;
  }
  DAT_01dc0dd8 = 0;
  FUN_00d24020(0);
  if (-1 < (char)(byte)DAT_01bea090) {
    bVar10 = ((byte)DAT_01bea090 & 0x10) == 0;
    if (bVar10) {
      DAT_01dc086c = DAT_01dc0dec;
      DAT_01dc0870 = DAT_01dc0df0;
    }
    else {
      DAT_01dc086c = 1;
      DAT_01dc0870 = 1;
    }
    DAT_01dc0874 = (uint)!bVar10;
    FUN_00cfed90();
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
    uVar7 = FUN_00cd4160();
    uVar8 = FUN_00d243c0();
    *(uint *)(param_1 + 0x6c) = uVar7 & uVar8;
    if ((uVar7 & uVar8) != 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  iVar4 = FUN_009c5600();
  if (*(int *)(param_1 + 0xe8) != iVar4) {
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
      *(int *)(param_1 + 0xe8) = iVar4;
      return;
    }
    *(int *)(param_1 + 0xe8) = iVar4;
  }
  return;
}

